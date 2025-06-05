#include <stdlib.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j = 0;

    while (s[i])
    {
        while (accept[j] && s[i] != accept[j])
            j++;
        if (!accept[j])
            return(i);
        j = 0;
        i++;
    }
    return (i);
}
