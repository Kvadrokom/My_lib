#include <strings.h>

void	*ft_memcpy(void * destptr, const void * srcptr, size_t num)
{
	const char	*tsrc;
	char		*tdest;

	tsrc = srcptr;
	tdest = destptr;
	if (!tsrc && !tdest)
		return(0);
	while(num--)
	{
		*tdest++ = *tsrc++;
	}
	return(destptr);
}