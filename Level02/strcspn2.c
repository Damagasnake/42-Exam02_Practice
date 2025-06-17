#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j = 0;

    while(s[i])
    {
        while(reject[j])
        {
            if(s[i] == reject[j])
                return(s[i]);
            j++;
        }
        j = 0;
        i++;
    }
    write(1, "\n", 1);
    return(0);
}



//s = [HolaTest] reject = [lot]

//H == l? NO
// H == O? NO
//H == T? NO
//O == L? NO
//O == O? YES
//return 1