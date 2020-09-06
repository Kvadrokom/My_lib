#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>
#include "my_lib.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}