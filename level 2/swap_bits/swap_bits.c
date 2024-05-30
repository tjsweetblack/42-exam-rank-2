#include <stdio.h>
#include <unistd.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char 	bit;

	while (i >= 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}


int main(void)
{
	unsigned char d = 'e';
	unsigned char e = swap_bits(d);
	print_bits(e);
	return 0;
}