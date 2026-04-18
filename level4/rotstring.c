#include <unistd.h>

void skip(char *str, int *i)
{
    while (str[*i] == ' ' || str[*i] == '\t')
        (*i)++;
}

int c(char *str, int *i)
{
    if (str[*i] && str[*i] != ' ' && str[*i] != '\t')
        return 1;
    return 0;
}

void rotstring(char *str)
{
    int i = 0, start;

    skip(str, &i);
    start = i;

    while (c(str, &i))
        i++;

    while (str[i])
    {
        skip(str, &i);

        if (str[i])
        {
            while (c(str, &i))
            {
                write(1, &str[i], 1);
                i++;
            }
            write(1, " ", 1);
        }
    }

    while (c(str, &start))
    {
        write(1, &str[start], 1);
        start++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        rotstring(argv[1]);
    write(1, "\n", 1);
    return 0;
}
