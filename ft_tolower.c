#include <string.h>
#include "my_lib.h"

int	ft_tolower (int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return(c);
}