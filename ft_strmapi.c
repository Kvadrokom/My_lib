#include <string.h>
#include <stdlib.h>
#include "my_lib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	i = 0;
	len = ft_strlen(s);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return(NULL);
	while(i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}