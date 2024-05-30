/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:53:48 by badriano          #+#    #+#             */
/*   Updated: 2024/05/20 11:08:59 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if(argc != 2)
	{
		return(0);
	}

	while(argv[1][i] != '\0')
	{
		if(argv[1][i] >= 65 && argv[1][i] <= 90)
		{
			ft_putchar('_');
			ft_putchar(argv[1][i] + 32);
		}
		else
		{
			ft_putchar(argv[1][i]);
		}
		i++;
	}
	return 0;
}