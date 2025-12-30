char *ft_strrev(char *str)
{
    int i; //index from the start
    int len; //length of the string later used ad index
    char temp; //ued for swapping characters

    i = 0;
    len = 0;

    while(str[len])
        len++;

    while(i < len - 1)
    {
        temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        i++; //move from the start
        len--; // move from the end
    }
    return str;
}