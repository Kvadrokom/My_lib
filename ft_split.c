#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_lib.h"

int    ft_length(const char    *s, char    c)
{
    int    len;

    len = 0;
    while (*s != c)
	{
		len++;
		s++;
	}
    return(len);
}

int	ft_numstr(const char *s, char c, int numstr)
{
	int	inword;

	inword = 1;
	if (s)
	{
		while (*s)
    	{
      		if (*s == c)
			  {
				inword = 1;
				s++;
			  }
      		if (*s != c)
	  		{
		  		if (inword)
		  		{
					numstr++;
					inword = 0;
		  		}
				s++;
	  		}  		
    	}
		return(numstr);
	}
	else
	return(0);
}

char	*ft_makestr(const char	*s, char	c)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_length(s, c);
	str = (char*)malloc(sizeof(char) * (len + 1));
	while(i < len)
		str[i++] = *s++;
	str[i] = '\0';
	return(str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		numstr;
	int		i;

	i = 0;
	numstr = 0;
	if (!s)
		return(NULL);
	numstr = ft_numstr(s, c, numstr);
	split = (char**)malloc(sizeof(char*) * (numstr + 1));
	if (!split)
		return(NULL);
	while(i < numstr && *s)
	{
		if (*s == c)
			s++;
		else
		{
			split[i++] = ft_makestr(s, c);
			s = s + ft_length(s, c);
		}
	}
	split[i] = 0;
	return(split);
}