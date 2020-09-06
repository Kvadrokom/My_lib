#include <string.h>
#include "bonus.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *tmp;
    
    new = NULL;
    if (!f || !del)
        return (NULL);
    while (lst)
    {
        if (!(tmp = ft_lstnew(f(lst->content))))
        {
          while (new)
          {
            tmp = new->next;
            del(new->content);
            free(new);
            new = tmp;
          }
          lst = NULL;
          return NULL;
        }
        lst = lst->next;
        ft_lstadd_back(&new, tmp);
    }
    return(new);
}
