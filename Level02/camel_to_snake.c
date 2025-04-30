/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:21:42 by davidma2          #+#    #+#             */
/*   Updated: 2025/04/23 03:36:34 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
        {
            while (argv[1][i])
            {
                if (argv[1][i] >= 65 && argv[1][i] <= 90)
                {
                    argv[1][i] = argv[1][i] + 32;
                    write(1, "_", 1);
                }
                write(1, &argv[1][i], 1);
                i++;
            }
        }
        write(1, "\n", 1);
        return(0);
}
