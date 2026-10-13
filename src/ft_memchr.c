#include "libft.h"

void  *ft_memchr(const void *s, int c, size_t len)
{
  unsigned char *p_s;
  size_t  i;

  p_s = (unsigned char*)s;
  i = 0;
  while (i < len)
  {
    if (*(p_s+i) == (unsigned char)c)
      return ((void *)(p_s + i));
    i++;
  }
  return (NULL);
}
