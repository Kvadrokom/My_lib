#include <string.h>
#include "bonus.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
        new->next = *lst;
        *lst = new;
}