#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_lib.h"

int		ft_findex(const char	*s1, const char	*set)
{
	size_t	start;

	start = 0;
	while(ft_strchr(set, *s1) && *s1)
	{
		s1++;
		start++;
	}
	return(start);
}

int	ft_bindex(const char	*set, const char	*tmp, int	len)
{
	while(ft_strchr(set, *tmp) && len)
	{
		tmp--;
		len--;
	}
	return(len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	size_t		end;
	size_t	start;
	int		i;

	i = 0;
	start  = ft_findex(s1, set);
	if (start == ft_strlen(s1))
        start = end = 0;
    else
		end = ft_bindex(set, s1 + ft_strlen(s1), ft_strlen(s1));
	if (end >= start)
	{
		strtrim = (char*)malloc(sizeof(char) * (end - start + 1));
		if (strtrim)
		{
			while(start < end)
				strtrim[i++] = s1[start++];
			strtrim[i] = '\0';
			return(strtrim);
		}
	}
	return(NULL);
}