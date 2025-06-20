#include <unistd.h>

int endofword(char *s)
{
    int i = 0;
    
    while(s[i] != ' ' || s[i] != '\t')
    {
        write(1, &s[i], 1);
        i++;
    }
}

 int errasespace(char *s)
{
    int i = 0;
    while(s[i])
    {
       if(s[i] == ' ' || s[i] == '\t' && s[i + 1] == ' ' || s[i + 1] == '\t')
            {
                write(1, &s[i], 1);
                i += 1;
                while (s[i] == ' ' || s[i + 1] == ' ' && s[i] == '\t' || s[i + 1] == '\t' )
                    i++;
            }
        else if (s[i] != ' ' || s[i] || '\t')
            {
                write(1,&s[i], 1);
                i++;
            }    
        }
    return(0);
}
// Hola que    tal  estas amigo
// ^^^^^^^^^ ^
// ||||||||| |
// 000000001 1
//          ' '