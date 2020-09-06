#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t number, size_t size)
{
	char	*str;
	int		i;

	i = number * size;
	str = malloc(i);
	if (str)
	{
		while(i)
		{
			*str++ = 0;
			i--;
		}
	}
	else
		return(NULL);
	return(str - number * size);
}