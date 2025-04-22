/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:21:47 by davidma2          #+#    #+#             */
/*   Updated: 2025/04/22 13:21:48 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 4 && !argv[2][1] && !argv[3][1])
        {
            while (argv[1][i])
            {
                if (argv[1][i] == argv[2][0])
                    argv[1][i] = argv[3][0];
                write(1, &argv[1][i], 1);
                i++;
            }
        }
        write(1, "\n", 1);
}
