#include "libft.h"

void  *ft_memalloc(size_t size)
{
  void  *n_mem = malloc(size);
  if (!n_mem)
    return (NULL);
  ft_bzero(n_mem,size);
  return (n_mem);
}
