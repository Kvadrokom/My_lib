#include <string.h>
#include <stdlib.h>
#include "my_lib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	if (start >= ft_strlen(s))
    	len = 0;
    else
		len = (len > ft_strlen(&s[start])) ? ft_strlen(&s[start]):len;
	sub = (char*)malloc(sizeof(char) * (len + 1));
	if (!sub || !s)
		return(NULL);
	while(s[start] && len)
	{
		sub[i++] = s[start++];
		len--;
	}
	sub[i] = '\0';
	return(sub);
}