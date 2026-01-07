#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
    return(c==' ' || c=='\n' || c=='\t');
}
int count_words(char *str)
{
    int i=0,count=0;
    while(str[i])
    {
        while(str[i]&&is_space(str[i]))
        i++;
        if(str[i])
        {
            count++;
            while(str[i]&&!is_space(str[i]))
            i++;
        }
    }
    return(count);
}
char *duplicate_word(char *str,int start,int length)
{
    int j=0;
    char *dup=malloc(sizeof(char)*(length+1));
    if(!dup)
        return (NULL);
    while(j < length)
    {
        dup[j]=str[j+start];
        j++;
    }
    dup[j]='\0';
    return (dup);
}

char **ft_split(char *str)
{
    int words=count_words(str);
    char **split=malloc(sizeof(char *)*(words+1));
    
    if(!split)
        return(NULL);
    
    int i=0,k=0,start,length;
    start = 0;
    length = 0;

    while(str[i])
    {
        while(str[i]&&is_space(str[i]))
            i++;
        if(str[i])
        {
            start=i;
            length=0;
            while(str[i]&&!is_space(str[i]))
            {
                i++;
                length++;
            }
            split[k]=duplicate_word(str,start,length);
            k++;
        }
    }
    split[k]=NULL;
    return(split);
}

int main()
{
    char *original=" ca\n\nbot   \tsi\tkalut";
    char **split=ft_split(original);
    int i=0;
    int w = count_words(original);
    printf("%d\n", w);
    while(split[i])
    {
        printf("%s\n",split[i]);
        i++;
    }
}