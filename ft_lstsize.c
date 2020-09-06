#include <string.h>
#include "bonus.h"

int ft_lstsize(t_list *lst)
{
    t_list  *tmp;
    int     size;

    size = 0;
    if (lst)
    {
        tmp = lst;
        while (tmp)
        {
           tmp = tmp->next;
           size++;
        }
    return(size); 
    }
    return(0);
}