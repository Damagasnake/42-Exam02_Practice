/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:49:26 by davidma2          #+#    #+#             */
/*   Updated: 2025/05/21 10:50:17 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// int isOnBoth(char *str, char *str2, char c)
// {
//     int i = 0;
//     int j = 0;
//     int contcheck;
//     char *checker[10000000];
//     while(str[i] && str2[j])
//     {
//         if(str[i] != str2[j])
//             return 0;
//         else
//             checker[contcheck] = str[i];
            
//         i++;
//         j++;
//     }
//     return 1;
//     // while (str[i] == str2[j])
//     // {
//     //    checker[i] = str[i];
//     //     if (str[i] != str2[j])
//     //         return (1);
//     // }
// }
// // int isprinted (char *result)
// // {
// //     int i = 0;
// //     if (isOnBoth())
// // }

#include <unistd.h>

int check_repeat(char *str, char c, int pos)
{
    int i = 0; // Cont.
    while (i < pos) // Se recorre la str desde el inicio a pos - 1.
    {
        if (str[i] == c) // Si el caractér de esa posicion en la str es igual al char  
            return (1); //devolvemos 1
        i++; //Avanzamos
    }
    return (0);
}

int check_presence(char *str, char c)
{
    int i = 0; //Cont.
    while (str[i]) //Avanzamos la str
    {
        if (str[i] == c) //Si el caracter en s1 = caracter
            return (1); //Devolvemos 1
        i++; //Avanzamos
    }
    return (0);
}

void ft_inter(char *s1, char *s2)
{
    int i = 0; //Cont
    while (s1[i])
    {
        if (check_presence(s2, s1[i]) && !check_repeat(s1, s1[i], i)) //Si checkpresence de la str2 con el caracter de s1 no se ha repetido con mi str s1, con ese caracter de s1 y con mi contador pos
            write(1, &s1[i], 1); //Escribe y avanza
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_inter(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return (0);
}
