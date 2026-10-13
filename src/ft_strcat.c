#include "libft.h"

char  *ft_strcat(char *dst, const char *append)
{
  char *tmp = dst;
  while (*tmp)
    tmp++;
  ft_strcpy(tmp,append);
  return (dst);
}
