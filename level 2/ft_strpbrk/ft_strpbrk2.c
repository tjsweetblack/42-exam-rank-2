/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 02:59:34 by badriano          #+#    #+#             */
/*   Updated: 2024/05/23 03:15:32 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
		int j;

		j = 0;
		while(s2[j] != '\0')
		{
			if(*s1 == s2[j])
			{
				return(char *)s1;
			}
			i++;
		}
		s1++;
	}
	return(NULL);
}