/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:21:12 by davidma2          #+#    #+#             */
/*   Updated: 2025/04/22 13:21:13 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
/*
int ft_atoi(char *str)
{
    int i = 0;
    int resultado = 0;
    int signo = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        signo = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        resultado = resultado * 10 + str[i] - '0';
        i++;
    }
    return (signo * resultado);
}
*/

int ft_atoi(const char *str)
{
    int nbr = 0;
    int sign = 1;
    int i = 0;
    
    if(str[0] == '-' || str[0] == '+')
    {
        if(str[0] == '-')
            sign = -1;
        i += 1;
        
    }
    while(str[i] && str[i] >= '0' && str[i] <= '9')
        nbr = (nbr * 10) + (str[i++] - '0');
    return(nbr *sign);
}

