#include <string.h>
#include <strings.h>
#include <stdlib.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while(*str1 && *str2 && n)
	{
		if (*str1 != *str2)
			return((unsigned char)*str1 - (unsigned char)*str2);
		n--;
		str1++;
		str2++;
	}
	return((unsigned char)*str1 - (unsigned char)*str2);
}