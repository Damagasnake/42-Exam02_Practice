/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:22:50 by davidma2          #+#    #+#             */
/*   Updated: 2025/04/22 13:22:51 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_puftnbr(int n)
{
    char str[10] = "0123456789";
    if (n > 9)
        ft_puftnbr(n / 10);
    write(1, &str[n % 10], 1);
}
int main(void)
{
    int n = 1;

    while(n <= 100)
    {
    if (n % 15 == 0)
        write(1, "fizzbuzz", 8);
    else if (n % 3 == 0)
        write(1, "fizz", 4);
    else if (n % 5 == 0)
        write(1, "buzz", 4);
    else
        ft_puftnbr(n);
    n++;
    write(1, "\n", 1);
    }
}
