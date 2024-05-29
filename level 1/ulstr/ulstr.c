/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:58:48 by badriano          #+#    #+#             */
/*   Updated: 2024/05/18 15:06:59 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
char capitalize(char c)
{
	if(c >= 65 && c <= 90)
	{
		c = c + 32;
	}else if(c >= 97 && c <= 122)
	{
		c = c - 32;
	}else
	{
		c = c;
	}
}

int main(int argc, char const *argv[])
{

	if(argc == 2)
	{
		int i;
		 i = 0;
		 while(argv[1][i] != '\0')
		 {
		 	ft_putchar(capitalize(argv[1][i]));
		 	i++;
		 }
	}
	ft_putchar('\n');
	return 0;
}
