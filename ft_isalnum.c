#include <string.h>
#include "my_lib.h"

int	ft_isalnum(int character)
{
	if (ft_isalpha(character) || ft_isdigit(character))
		return(8);
	return(0);
}