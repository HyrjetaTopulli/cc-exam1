t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int temp; 
    t_list *head;

    head = temp;
    while(lst != NULL && lst->next != NULL)
    {
        if((*cmp)(lst->data, lst->next->data) == 0)
        {
            temp = lst->data;
            lst->data 
        }
    }
    
}