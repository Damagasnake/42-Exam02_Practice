#include <unistd.h>

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
