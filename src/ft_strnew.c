#include "libft.h"

char  *ft_strnew(size_t size)
{
  char *str = (char *)malloc(size + 1);
  if (!str)
    return (NULL);
  ft_bzero(str,size + 1);
  return (str);
}
