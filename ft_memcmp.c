#include <string.h>

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*tarr1;
	unsigned char	*tarr2;
	size_t		i;

	tarr1 = (unsigned char *)arr1;
	tarr2 = (unsigned char *)arr2;
	i = 0;
	while(i < n)
	{
		if (tarr1[i] != tarr2[i])
			return(tarr1[i] - tarr2[i]);
		i++;
	}
	return(0);
}