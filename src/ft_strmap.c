#include "libft.h"

char  *ft_strmap(char const *s, char (*f)(char))
{
  char *res;
  char *tmp;

  if (!s || !f)
    return NULL;
  res = (char *)malloc(ft_strlen(s) + 1);
  tmp = res;
  if (!res)
    return NULL;
  while (*s)
    *tmp++ = f(*s++);
  *tmp = *s;
  return (res);
}
