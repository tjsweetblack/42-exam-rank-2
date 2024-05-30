/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:07:01 by badriano          #+#    #+#             */
/*   Updated: 2024/05/30 14:42:17 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int     main(int ac, char **av)
{
        int     seen[256] = {0};
        char    result[256];
        int     i = 0;
        int     j = 0;

        if (ac != 3)
        {
                write(1, "\n", 1);
                return (0);
        }

        while(av[1][i])
        {
                if(!seen[av[1][i]])
                {
                        result[j++] = av[1][i];
                        seen[av[1][i]] = 1;
                }
                i++;
        }
        i = 0;

        while(av[2][i])
        {
                if(!seen[av[2][i]])
                {
                        result[j++] = av[2][i];
                        seen[av[2][i]] = 1;
                }
                i++;
        }
        result[j] = '\0';
        i = 0;

        while(result[i])
        {
                write(1, &result[i], 1);
                i++;
        }
        write(1, "\n", 1);
        return (0);
}
