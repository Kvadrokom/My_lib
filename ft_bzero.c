#include <strings.h>

void ft_bzero(void* s, size_t n)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = s;
	while(i < n && tmp[i])
	{
		tmp[i] ='\0';
		i++;
	}
}
