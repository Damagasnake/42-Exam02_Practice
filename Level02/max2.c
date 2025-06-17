#include <unistd.h>

 int max(int *tab, unsigned int len)
 {
    int i = 0;
    int j = 0;
    int res;
    if(len == 0)
        return(0);
    res = tab[0];
    while (i < len)
    {
        if(tab[i] > res)
            res = tab[i];
            i++;
    }
    return(res);
 }
 //tab[-2 -4 -45 -5 -6]