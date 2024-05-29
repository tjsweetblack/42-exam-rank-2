/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:51:26 by badriano          #+#    #+#             */
/*   Updated: 2024/05/16 16:36:52 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

char ft_putchar(char c)
{
	write(1, &c, 1);
}

char rotone(char c)
{
	if((c >= 65 && c <= 89) || (c >= 97 && c <= 121))
	{
		c = c + 1;
	}else if(c == 90 || c == 122)
	{
		c = c - 25;
	}else
	{
		c = c;
	}
	return(c);
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			char d = rotone(argv[1][i]);
			ft_putchar(d);
			i++;
		}

	}
	ft_putchar('\n');
	return 0;
}