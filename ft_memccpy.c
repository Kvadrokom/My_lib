#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tdest;
	unsigned char	*tsrc;

	tdest = (unsigned char*)dest;
	tsrc = (unsigned char*)src;
	while(n--)
	{
		*tdest++ = *tsrc++;
		if(*(tsrc - 1) == (unsigned char)c)
			return (tdest);
	}
	return(0);
}