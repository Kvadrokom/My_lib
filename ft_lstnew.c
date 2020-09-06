#include <stdlib.h>
#include "bonus.h"

t_list  *ft_lstnew(void *content)
{
	t_list  *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if(tmp)
	{
		tmp->next = 0;
		tmp->content = content;
		return tmp;
	}
	return(NULL);
}