/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:24:59 by badriano          #+#    #+#             */
/*   Updated: 2024/05/18 17:09:03 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char alphamirror(char c)
{
	if(c >= 65 && c <= 90)
	{
		c = 90 - c + 65; 
	}else if(c >= 97 && c <= 122)
	{
		c = 122 - c + 97;
	}
}
int main(int argc, char const *argv[])
{
	if(argc == 2)
	{
		int i;
		char c;

		i = 0;
		while(argv[1][i] != '\0')
		{
			c = alphamirror(argv[1][i]);
			ft_putchar(c);
			i++;
		}
	}

	ft_putchar('\n');
	return (0);
}