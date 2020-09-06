#include <string.h>
#include <stdlib.h>
#include "my_lib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		i;

	i = 0;
	strjoin = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if(strjoin)
	{
		while(*s1)
		{
			strjoin[i] = *s1++;
			i++;
		}
		while(*s2)
		{
			strjoin[i] = *s2++;
			i++;
		}
		strjoin[i] = '\0';
	}
	else
		return(NULL);
	return(strjoin);
}