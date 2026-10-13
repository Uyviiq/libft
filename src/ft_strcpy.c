#include "libft.h"

char  *ft_strcpy(char *dest, const char *src)
{
  char *tmp = dest;
  while (*src)
    *tmp++ = *src++;
  *tmp = *src;
  return (dest);
}
