#include <stdio.h>
#include <unistd.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

void	print_bits(unsigned char octet)
{
	int i;

	i = 8;
	unsigned char bit;
	while(i >= 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}
int main(int argc, char const *argv[])
{
	unsigned char c;
	unsigned char d;

	c = 'e';
	d = swap_bits(c);
	print_bits(c);
	write(1, "\n", 2);
	print_bits(d);
	return(0);
}