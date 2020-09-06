#include <strings.h>

void	*ft_memchr( const void *memptr, int val, size_t num)
{
	const char	*tmp;
	const char	*tmem;
	size_t		i;

	i = 0;

	tmem = memptr;
	while(i < num)
	{
		if (tmem[i] == (char)val)
		{
			tmp = &tmem[i];
			return((void *)tmp);
		}
		i++;
	}
	return(NULL);
}