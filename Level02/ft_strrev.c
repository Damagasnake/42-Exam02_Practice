#include <unistd.h>
#include <stdio.h>

char *ft_strrev(char *s)
{
    int i = 0;
    int lon = 0;
    char tmp;

    while(s[lon])
        lon++;
    while (i < lon - 1)
    {
        tmp = s[i];
        s[i] = s[lon - 1];
        s[lon - 1] = tmp;
        i++;
        lon--;
    }
    return(s);
}
int main(void)
{
    char test1[] = "hola";
    char test2[] = "12345";
    char test3[] = "a";
    char test4[] = "";
    char test5[] = "racecar";

    printf("Original: '%s' -> Reversed: '%s'\n", "hola", ft_strrev(test1));
    printf("Original: '%s' -> Reversed: '%s'\n", "12345", ft_strrev(test2));
    printf("Original: '%s' -> Reversed: '%s'\n", "a", ft_strrev(test3));
    printf("Original: '%s' -> Reversed: '%s'\n", "", ft_strrev(test4));
    printf("Original: '%s' -> Reversed: '%s'\n", "racecar", ft_strrev(test5));

    return 0;
}
