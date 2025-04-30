/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:49:26 by davidma2          #+#    #+#             */
/*   Updated: 2025/04/30 11:13:10 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int isOnBoth(char *str,char *str2, char c)
{
    int i = 0;
    int j = 0;
    int contcheck;
    char *checker[10000000];
    while(str[i] && str2[j])
    {
        if(str[i] != str2[j])
            return 0;
        else
            checker[contcheck] = str[i];
            
        i++;
        j++;
    }
    return 1;
    // while (str[i] == str2[j])
    // {
    //    checker[i] = str[i];
    //     if (str[i] != str2[j])
    //         return (1);
    // }
}
// int isprinted (char *result)
// {
//     int i = 0;
//     if (isOnBoth())
// }