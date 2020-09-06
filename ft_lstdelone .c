#include <string.h>
#include "bonus.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    t_list  *tmp;

    if (!(*lst))
        return;
    del(lst->content);
    free(lst);
}