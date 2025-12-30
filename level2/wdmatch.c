#include <unistd.h>

int main (int argc, char *argv[])
{
    if (argc == 3)
    {
        const char *s1 = argv[1];
        const char *s2 = argv[2];
        int len = 0;
        int i = 0;

        while (s1[len])
            len++;

        while (i < len && *s2)
        {
            if (s1[i] == *s2++)
                i++;
        }

        if (i == len)
            write(1, s1, len);
    }
    write(1, "\n", 1);
    return 0;
}