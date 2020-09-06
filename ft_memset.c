#include <strings.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int		i;
	char				*memory;

	memory = str;
	i = 0;
	while(i < n)
	{
		memory[i] = c;
		i++;
	}
	return (memory);
}