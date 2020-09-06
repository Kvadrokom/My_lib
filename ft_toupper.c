#include <string.h>
#include "my_lib.h"

int	ft_toupper(int character)
{
		if (character >= 'a' && character <='z')
			character -= 32;
		return(character);
}