#include <unistd.h>

int checkpresence(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] == c)
            return (1);
        i++;
    }
    return 0;
}

int checkrepeat(char *s, char c, int pos)
{
    int i = 0;

    while(i < pos)
    {
        if(s[i] == c)
            return 1;
        i++;
    }
    return 0;
}

void    inter(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if(checkpresence(s2, s1[i]) && !checkrepeat(s1, s1[1], i))
            write(1, &s1[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
    return 0;
}
