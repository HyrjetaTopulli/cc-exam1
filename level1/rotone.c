#include <unistd.h>

int main (int argc, char *argv[])
{
    int i;
    i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == 90 || argv[1][i] == 122)
                argv[1][i] -= 25;

            else if ((argv[1][i] >= 65 && argv[1][i] <= 89) || (argv[1][i] >= 95 && argv[1][i] <= 121))
                argv[1][i] += 1;


            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
