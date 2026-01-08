typedef struct s_list
{
    int             data;
    struct s_list   *next;
} t_list;


t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *current = lst;

    if (!lst)
        return lst;

    int temp = 0;

    while (lst->next)
    {
        if (cmp(lst->data, lst->next->data) == 0)
        {
            temp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp;
            lst = current;
        }
        else
            lst = lst->next;
    }
    return (current);
}

