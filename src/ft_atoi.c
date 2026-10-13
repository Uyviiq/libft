#include "libft.h"

int ft_atoi(const char *nptr)
{
  int res;
  int is_negative;

  res = 0;
  is_negative = FALSE;
  while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
    nptr++;

  if (*nptr == '-' || *nptr == '+')
  {
    if (*nptr == '-')
      is_negative = TRUE;
    nptr++;
  }

  while(ft_isdigit(*nptr))
  {
    res = res * 10 + (*nptr - 48);
    nptr++;
  }
  return (is_negative ? -res : res);
}
