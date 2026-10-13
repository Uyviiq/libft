#include "libft.h"

void  *ft_memccpy(void *dest, const void *src, int  c, size_t count)
{
  size_t i;
  unsigned char *s;
  unsigned char *d;

  i = 0;
  s = (unsigned char *)src;
  d = (unsigned char *)dest;
  while (i < count)
  {
    ft_memcpy(d+i,s+i,1);
    if (*(s+i) == (unsigned char)c)
      return (d+i+1);
    i++;
  }
  return (NULL);
}
