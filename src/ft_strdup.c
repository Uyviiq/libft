#include "libft.h"

char  *ft_strdup(const char *str)
{
  int s_len = ft_strlen(str) + 1;
  char *n_str = (char *)malloc(s_len);
  if (!n_str)
    return (NULL);
  n_str[s_len - 1] = '\0';
  while (*str)
      *n_str++ = *str++;
  s_len--;
  return (n_str - s_len);
}
