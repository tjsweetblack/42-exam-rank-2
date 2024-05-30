/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:27:32 by badriano          #+#    #+#             */
/*   Updated: 2024/05/21 17:20:50 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *accept)
{
    size_t count = 0;
    int i, j;

    while (s[count] != '\0')
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[count] == accept[j])
            {
                return count;
            }
        }
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    printf("%zu\n", ft_strcspn("hello", "hello"));
    return 0;
}