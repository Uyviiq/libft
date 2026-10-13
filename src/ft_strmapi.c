#include "libft.h"

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *res;
  char *tmp;
  int i;

  if (!s || !f)
    return NULL;
  res = (char *)malloc(ft_strlen(s) + 1);
  i = 0;
  tmp = res;
  if (!res)
    return NULL;
  while (*s)
    *tmp++ = f(i++,*s++);
  *tmp = *s;
  return (res);
}
