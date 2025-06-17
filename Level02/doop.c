#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int res = 0;
    int n1 = atoi(av[1]);
    int n2 = atoi(av[3]);

    if(ac == 4)
    {
        if(av[2][0] == '+')
            res = n1 + n2;
        else if(av[2][0] == '-')
            res = n1 - n2;
        else if(av[2][0] == '*')
            res = n1 * n2;
        else if(av[2][0] == '/')
            res = n1 / n2;
        printf("%d\n", res);
    }
    write(1, "\n", 1);
    return(0);
}
