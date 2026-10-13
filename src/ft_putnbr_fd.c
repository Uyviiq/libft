#include "libft.h"

void  ft_putnbr_fd(int n, int fd)
{
  long l_n = n;
  if (l_n < 0)
  {
    ft_putchar_fd('-',1);
    l_n = -l_n;
  }
  if (l_n >= 10)
    ft_putnbr_fd(l_n / 10,fd);
  write(fd,&"0123456789"[l_n % 10],1);
}
