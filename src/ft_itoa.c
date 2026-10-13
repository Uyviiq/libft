#include "libft.h"

static int  ft_numlen(long n)
{
  int l;

  l = 1;
  if (n < 0)
  {
    l++;
    n = -n;
  }
  while (n / 10)
  {
    n /= 10;
    l++;
  }
  return (l);
}

char  *ft_itoa(int n)
{
  int size;
  char  *res;
  long  l_n;

  size = 0;
  l_n = n;
  size += ft_numlen(l_n) + 1;
  res = (char *)malloc(size * sizeof(char));
  if (!res)
    return (NULL);
  size--;
  res[size--] = '\0';
  if (l_n < 0)
  {
    l_n = -l_n;
    res[0] = '-';
  }
  while (l_n >= 10)
  {
    res[size] = (l_n % 10) + 48;
    size--;
    l_n /= 10;
  }
  res[size] = (l_n % 10) + 48;
  return (res);
}
