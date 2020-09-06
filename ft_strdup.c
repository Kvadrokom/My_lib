#include <string.h>
#include <stdlib.h>
#include "my_lib.h"

char	*ft_strdup(const char *str)
{
	char	*strdup;
	int		i;

	i = 0;
	strdup = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (strdup && str)
	{
		while(*str)
		{
			*strdup++ = *str++;
			i++;
		}
		*strdup = '\0';
	}
	else
		return(NULL);
	return(strdup - i);
}