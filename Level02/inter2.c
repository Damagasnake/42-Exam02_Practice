/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:54:19 by davidma2          #+#    #+#             */
/*   Updated: 2025/05/21 11:12:51 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int checkpresence(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int isOnBoth(char *str, char c, int pos)
{
    int i = 0;
    
    while(i < pos)
    {
        if(str[i] == c)
            return(1);
        i++;        
    }
    return(0);
}

int main(int argc, char **argv)
{
    int i = 0;
    if(argc == 3)
        ft_inter(argv[1], argv[2]);
    write(1, "\n", 1);
}
