#include <string.h>
#include "my_lib.h"

char    *ft_strnstr(const char    *big, const char *little, size_t len)
{
    size_t    j;
    size_t    n;

    j = 0;
    n = len;
    if (ft_strlen(little) > ft_strlen(big))
            return(NULL);
    if (!len || !ft_strlen(little))
        return(big);
    while(*big && n)
    {
        if (n-- && *big == *little)
        {
            while( little[j] && *big)
            {
                if(*big++ != little[j])
                    break;
                    j++;
            }
        }
        if (little[j] == 0)
            return((char *)big - j);
        j = 0;
        big++;
    }
    return(NULL);
}