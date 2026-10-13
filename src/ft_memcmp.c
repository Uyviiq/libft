#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  const unsigned char *f_s = s1;
  const unsigned char *s_s = s2;
  size_t i = 0;
  while (*(f_s + i) == *(s_s + i) && i < n)
    i++;
  return (*(f_s + i) - *(s_s + i));
}
