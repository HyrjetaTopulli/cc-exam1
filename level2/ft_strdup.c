#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *temp; // we'll duplicate string into this variable

    while(src[len]) //we calculate the length of the string to create enough space in memory
        len++;

    temp = malloc(sizeof(char) * (len + 1)); //allocate space with malloc, and add +1 cuz the string needs one extra bit for "\0"
    if (!temp)
        return NULL;

    while (src[i]) //loop to complete the new string
    {
        temp[i] = src[i];
        i++;
    }
    temp[i] = 0;  //add the new character at the end
    return temp; // return the duplicated string
}


#include <stdio.h>

int main()
{
	char	*a;
	a = "Hello World";
	printf("%s\n", ft_strdup(a));
}
