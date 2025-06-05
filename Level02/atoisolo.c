#include <unistd.h>

int ft_atoi(char *s)
{
    int i = 0;
    int signo = 1;
    int res = 0;

     if (s[0] == '-' || s[0] == '+')
        {
            if (s[0] == '-')
                signo = -1;
            i++;
        }
    while (s[i] >= '0' && s[i] <= '9')
        res = (res * 10) + (s[i++] - '0');
   return(res * signo);
}
