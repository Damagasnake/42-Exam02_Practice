#include <unistd.h>

int main(int argc, char const **argv)
{
    int i;
    int flag = 0;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            else
            {
                if (flag)
                    write(1, "   ", 3);
                flag = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

// i = pos (s)
//flag si encuentra " " o "\t" se pone a 1 y avanza hasta encontrar una letra(no printea) y una vez en esa pos printea 3 " "