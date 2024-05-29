/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalf1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:06:12 by badriano          #+#    #+#             */
/*   Updated: 2024/05/16 12:41:08 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int charnum(char c)
{
	int d;
	if(c >= 65 && c <= 90)
	{
		d = c - 64;
	}else if (c >= 97 && c <= 122)
	{
		d = c - 96;
	}else
	{
		d = 1;
	}

	return(d);
}

void prtnrpt(char c, int n)
{
	while(n > 0)
	{
		ft_putchar(c);
		n--;
	}
}
int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
		int i;
		int c;

		i = 0;
		while(argv[1][i] != '\0')
		{
			c = charnum(argv[1][i]);
			prtnrpt(argv[1][i], c);
			i++;
		}
		
	}
	ft_putchar('\n');
		
	return 0;
	}
