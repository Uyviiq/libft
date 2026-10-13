#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
  int s_len;
  int i;
  
  i = 0;
  s_len = ft_strlen(s);
  if (c == 0)
         return ((char *)s + s_len);
  while (i < s_len)
  {
    if ((unsigned char)s[i] == (unsigned char)c)
      return ((char *)s + i);
    i++;
  }
  return (NULL);
}
