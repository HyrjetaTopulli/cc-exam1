#include <unistd.h>

int main (int argc, char *argv[])
{
    int i;
    int j;
    int k;

    if (argc > 1)
    {
        i = 0;
        j = 0;

        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        k = i;

        while (argv[1][i])
        {
            if (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t') && (argv[1][i - 1]))
    }
}
