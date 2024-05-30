/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:58:17 by badriano          #+#    #+#             */
/*   Updated: 2024/05/20 13:19:46 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if(argc != 4)
	{
		printf("\n");
		return(0);
	}

	if(argv[2][0] == '*')
	{
		printf("%d\n",atoi(argv[1]) * atoi(argv[3]));
	}else if(argv[2][0] == '+')
	{
		printf("%d\n",atoi(argv[1]) + atoi(argv[3]));
	}else if(argv[2][0] == '-')
	{
		printf("%d\n",atoi(argv[1]) - atoi(argv[3]));
	}else if(argv[2][0] == '/')
	{
		printf("%d\n",atoi(argv[1]) / atoi(argv[3]));
	}else if(argv[2][0] == '%')
	{
		printf("%d\n",atoi(argv[1]) % atoi(argv[3]));
	}
	return 0;
}