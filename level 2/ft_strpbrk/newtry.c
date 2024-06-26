/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newtry.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:36:14 by badriano          #+#    #+#             */
/*   Updated: 2024/05/25 17:43:55 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strpbrk(const char *s, const char *accept)
{
	while(*s && *s == *accept)
	{
		*s++;
		*accept++;
	}
	return(char *)s;
}
