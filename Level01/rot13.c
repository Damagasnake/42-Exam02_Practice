/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:21:58 by davidma2          #+#    #+#             */
/*   Updated: 2025/04/22 13:21:59 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *str = argv[1];
        int i = 0;
        
        while (str[i])
        {
            if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
                str[i] += 13;
            else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
                str[i] -= 13;
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
