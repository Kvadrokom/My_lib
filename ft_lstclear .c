#include <string.h>
#include "bonus.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;
    
    tmp = *lst;
    if ((*lst) && del)
    {
        while (tmp)
        {
            tmp = tmp->next;
            del(*lst);
            *lst = tmp;
        }
    }
    *lst = NULL;
}