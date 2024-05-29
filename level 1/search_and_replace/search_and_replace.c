/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchandrplc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:48:07 by badriano          #+#    #+#             */
/*   Updated: 2024/05/16 17:14:54 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	if(argc == 4 && !argv[2][1] && !argv[3][1])
	{
		int i;


		i = 0;
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
			}
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}