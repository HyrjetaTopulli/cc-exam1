#include <unistd.h>

int main (int argc, char *argv[])
{
    int i;
    int j;
    int ascii[128] = {0};

    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            if (!ascii[(int)argv[1][i]])
            {
                ascii[(int)argv[1][i]] = 1;
                write(1, &argv[1][i], 1);
            }
            i++;
        }

        j = 0;
        while (argv[2][j])
        {
            if (!ascii[(int)argv[2][j]])
            {
                ascii[(int)argv[2][j]] = 1;
                write(1, &argv[2][j], 1);
            }
            j++;
        }
    }
    write(1, "\n", 1);
}