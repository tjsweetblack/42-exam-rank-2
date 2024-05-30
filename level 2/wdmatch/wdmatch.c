/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:07:01 by badriano          #+#    #+#             */
/*   Updated: 2024/05/30 14:42:08 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr(char const *str)
{
	int i = 0;
	
	while (str[i])
		write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		while (av[2][j])
		{
			if (av[2][j++] == av[1][i])
				i++;
			if (!av[1][i])
			{
				ft_putstr(av[1]);
				i = 0;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
