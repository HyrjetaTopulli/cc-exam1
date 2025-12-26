#include <unistd.h>

int main (int argc, char *argv[])
{
    if (argc == 2)
    {
        int i;
        i = 0;
         
        while (argv[1][i])
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
                argv[1][i] += 32;

            else if (argv[1][i] >= 97 && argv[1][i] <= 122)
                argv[1][i] -= 32;

            write(1, &argv[1][i], 1);
            i++;
        }
    }
}