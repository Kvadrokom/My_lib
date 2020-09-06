#include <string.h>
#include "my_lib.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{

	int		n;
	int		i;

	i = ft_strlen(dst) + ft_strlen(src);
	n = size - ft_strlen(dst) - 1;
	while(*dst++)
		;
	dst--;
	if (n)
	{
		while(n-- && size--)
			*dst++ = *src++;
	}
	else
		return(i);
	if(size)
		*dst = '\0';
	return(i);
}