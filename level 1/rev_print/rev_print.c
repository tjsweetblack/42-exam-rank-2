/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:43:20 by badriano          #+#    #+#             */
/*   Updated: 2024/05/16 12:59:53 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_strlen(char *str)
{
	int i;
	 i = 0;
	 while(str[i] != '\0')
	 {
	 	i++;
	 }
	 return(i - 1);
}
int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int i;

	i = ft_strlen(argv[1]);
	while(i >= 0)
	{
		ft_putchar(argv[1][i]);
		i--;
	}
	
	}
	ft_putchar('\n');
	return 0;
}