#include <unistd.h>
#include <stdio.h>

int is_powerof2(unsigned int n)
{
    if(n == 0)
        return(0);
    while(n > 1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
            else
                return(0);
            
        }
        return(1);
    }
}
