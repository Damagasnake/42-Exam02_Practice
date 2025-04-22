/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:21:31 by davidma2          #+#    #+#             */
/*   Updated: 2025/04/22 13:21:32 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        if (argv[2][0] == '+')
            printf("%d", atoi(argv[1]) + atoi(argv[3]));
        if (argv[2][0] == '-')
            printf("%d", atoi(argv[1]) - atoi(argv[3]));
        if (argv[2][0] == '*')
            printf("%d", atoi(argv[1]) * atoi(argv[3]));
        if (argv[2][0] == '/')
            printf("%d", atoi(argv[1]) / atoi(argv[3]));
    }
    printf("\n");
    return(0);
}
// Uso printf   printf("%d", a imprimir);