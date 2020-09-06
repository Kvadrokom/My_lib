#include <string.h>
#include <unistd.h>
#include "my_lib.h"

void	ft_putstr_fd(char *s, int fd)
{
	while(*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}