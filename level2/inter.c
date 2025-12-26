#include <unistd.h>

int ft_putchar(char c);

int main (int argc, char *argv[])
{
    int i;
    int j;

    i = 0;

    int lookup[256] = {};

    if (argc == 3)
    {
        while (argv[1][i])
        {
            j = 0;

            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j] && !lookup[(int)argv[2][j]])
                {
                    lookup[(int)argv[2][j]] = 1;
                    ft_putchar(argv[2][j]);
                }
                j++;
            }
            i++;
        }
    }
    ft_putchar('\n');
}

int ft_putchar(char c)
{
    return write(1, &c, 1);
}