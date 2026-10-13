#include "libft.h"

char  *ft_strncat(char *dst, const char *src, size_t count)
{
  char  *tmp;

  tmp = dst;
  while (*tmp)
    tmp++;
  while (*src && count--)
    *tmp++ = *src++;
  *tmp = 0;
  return (dst);
}
