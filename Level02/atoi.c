#include <unistd.h>
#include <string.h>

int atoi(char *n)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    while (n[i])
    {
        if(n[i] == ' ' || n[i] == '\t')
            i++;
    }
    if(n[i] == '-' || n[i] == '+')
    {
        if(n[i] == '-')
            sign = - 1;
        i++;
    }
while (n[i] >= '0' && n[i] <= '9')
    res = (n[i] * 10) + (n[i++] + 0);
    return (sign * res); 
}
