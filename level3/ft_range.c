#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *range;
    int i = 0;
    int size;

    if (start > end)
        size = start - end + 1;
    else
        size = end - start + 1;

    range = malloc(sizeof(int) * size);
    if (!range)
        return NULL;

    while (i < size)
    {
        range[i++] = start;
        start += (start > end) ? -1 : 1;
    }

    return range;
}    