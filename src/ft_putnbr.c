#include "libft.h"

void  ft_putnbr(int n)
{
  long l_n = n;
  if (l_n < 0)
  {
    ft_putchar('-');
    l_n = -l_n;
  }
  if (l_n >= 10)
    ft_putnbr(l_n / 10);
  write(1,&"0123456789"[l_n % 10],1);
}
