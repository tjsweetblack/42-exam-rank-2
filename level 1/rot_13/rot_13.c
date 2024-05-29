/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot131.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:02:05 by badriano          #+#    #+#             */
/*   Updated: 2024/05/16 13:36:01 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
char revchar(char c)
{
	if(c >= 65 && c <= 77)
	{
		c = c + 13;
	}else if (c >= 78 && c <= 90)
	{
		c = c - 13;
	}else if(c >= 97 && c <= 109)
	{
		c = c + 13;
	}else if (c >= 110 && c <= 122)
	{
		c = c - 13;
	}else
	{
		c = c;
	}

	return(c);
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
			c = revchar(argv[1][i]);
			ft_putchar(c);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}