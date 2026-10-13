#include "libft.h"

int ft_toupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    return c;
  return (c - 32);
}
