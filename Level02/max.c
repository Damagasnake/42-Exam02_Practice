#include <unsistd.h>
int max(int *tab, int len)
{
    unsigned int i = 0;
    if(len == 0)
        return(0);
    int res = tab[0];
    while(i < len)
    {
        if(tab[i] < len)
            res = tab[i];
        i++;
    }
    return(res);
}
