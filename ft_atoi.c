#include <string.h>
#include "my_lib.h"

int    ft_atoi(const char *str)
{
    int    sign;
    int    nbr;
    int    s;   

    sign = 1;
    nbr = 0;
    while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' ||
          *str == '\v' || *str == '\f')
        str++;
    if (*str == '-' || *str == '+')
        sign = (*str++ == '-') ? -1:1;
    if (ft_isdigit(*str))
    {
      while (*str)
      {
          if ((*str >= '0' && *str <= '9'))
          {
            s = nbr;
            nbr = s * 10 + (*str - 48);
            if (nbr < s)
              return((-sign > 0) ? 0:-1);
            str++;
          }
      }
    }
    return(nbr * sign);
}