/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:56:21 by davidma2          #+#    #+#             */
/*   Updated: 2025/06/17 10:00:41 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_repeat(char *str, char c, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    
    while (s1[i])
    {
        if (!check_repeat(s1, s1[i], i))
            write(1, &s1[i], 1);
        i++;
    }
    while (s2[j])
    {
        if (!check_repeat(s1, s2[j], i) && !check_repeat(s2, s2[j], j))
            write(1, &s2[j], 1);
        j++;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    
    if (argc == 3)
    {
        ft_union(argv[1], argv[2]);
    }
    while (i < 1)
    {
        write(1, "\n", 1);
        i++;
    }
    return (0);
}
