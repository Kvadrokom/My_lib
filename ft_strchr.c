#include <string.h>

char	*ft_strchr (const char *str, int ch)
{
	int			i;

	i = 0;
	while(str[i])
	{
		if (str[i] ==(char)ch)
			return((char *)str + i);
		i++;
	}
	if (str[i] ==(char)ch)
		return((char *)str + i);
	return(NULL);
}