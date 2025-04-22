/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:22:40 by davidma2          #+#    #+#             */
/*   Updated: 2025/04/22 13:22:41 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char *ft_revprint(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    while (i--)
        write (1, &str[i], 1);
    write(1, "\n", 1);
    return(str);
}
