#include <string.h>
#include "my_lib.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if (*lst)
    {
        tmp = *lst;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new;
    }
    else
        *lst = new;
}