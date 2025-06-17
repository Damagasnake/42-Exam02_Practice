#include <unistd.h>

char *ft_strrev(char *s)
{
    int i = 0;
    char tmp;
    int len = 0;
    while (s[len])
        len++;
    while (i < len -1)
    {
        tmp = s[i];
        s[i] = s[len - 1];
        s[len - 1] = tmp;
        i++;
        len--;
    }
    return(s);
}
