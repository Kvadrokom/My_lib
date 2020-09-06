#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_lib.h"

char  *ft_numzero(void)
{
	char  *tmp;

	tmp = (char*)malloc(sizeof(char) * 2);
	if (!tmp)
		return(NULL);
	tmp[0] = '0';
	tmp[1] = '\0';
	return(tmp);
}

char  *make_str_from_int(char *c, int sign, int i)
{
	int k;
	char *tmp;

	k = 0;
	tmp = malloc(sizeof(char) * (i + 2));
	if (!tmp)
		return(NULL);
	if (sign < 0)
	{
		tmp[0] = '-';
		k = 1;
	}
	if (tmp)
	{
	while (i > 0)
		tmp[k++] = c[(i--) - 1];
	tmp[k] = '\0';
	return(tmp);
	}
	return(NULL);
}

char *ft_itoa(int num)
{
	char c[20];
	int i;
	char *tmp;
	int sign;

	sign = 1;
	i = 0;
	if (num < 0)
	{
	num = -num;
	sign = -1;
	}
	if (num == 0 || num == -2147483647 -1)
	{
		tmp = ft_numzero();
		return(tmp);
	}
	while (num > 0)
	{
	c[i++] = num % 10 + 48;
	num = num / 10;
	}
	tmp = make_str_from_int(c, sign, i);
	return (tmp);
}