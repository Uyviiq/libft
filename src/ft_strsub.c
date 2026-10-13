#include "libft.h"

char  *ft_strsub(char const *s, unsigned int start, size_t len)
{
  size_t i = 0;
  char *res = (char *)malloc(len + 1);
  if (!res)
    return (NULL);
  while (s[start + i] && i < len)
  {
      res[i] = s[start + i];
      i++;
  }
  res[i] = '\0';
  return (res);
}
