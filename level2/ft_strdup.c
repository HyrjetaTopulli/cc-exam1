#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *temp;
    int len = 0;
    int i = 0;

    while(src[len])
        len++;

    temp = malloc(sizeof(char) * len + 1);

    if (!temp)
        return NULL;

    while (src[i])
    {
        temp[i] = src[i];
        i++;
    }
    temp[i] = '\0';
    return temp;
}



#include <stdio.h>

int main()
{
    char *a;
    a = "hello world";
    printf("%s\n", ft_strdup(a));
}