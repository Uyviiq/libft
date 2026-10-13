#include "libft.h"

int ft_tolower(int c)
{
  if (c >= 'a' && c <= 'z')
    return c;
  return (c + 32);
}
