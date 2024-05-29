/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:42:38 by badriano          #+#    #+#             */
/*   Updated: 2024/05/16 11:07:20 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}else
	{
		ft_putchar(nb + 48);
	}
}
int main(int argc, char const *argv[])
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if((i % 3) == 0)
		{
			ft_putstr("fizz");
		}else if ((i % 5) == 0)
		{
			ft_putstr("buzz");
		}else
		{
			ft_putnbr(i);
		}

		ft_putchar('\n');
		i++;
	}
	return 0;
}
