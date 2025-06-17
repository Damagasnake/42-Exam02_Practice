#include <unistd.h>
#include <string.h>

/*size_t  ft_strcspn(const char *s, char *reject)
{
    size_t i = 0;
    size_t j = 0;

    while (s[i])
    {
        while (reject[j])
        {
            if(s[i] == reject[j])
                return(s[i]);
                j++;
        }
        j = 0;
        i++;
    }
    return(i);
}
    */
while(s[i] && reject[j])
{
    if(s[i] == reject[j])
    {
        return(s[i]);
    }
    else
       j++;
   if(reject[j + 1] == '\0' && reject[1] != '\0')
   {
        j = 0;
        i++;
   }
}
