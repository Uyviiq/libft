#include "libft.h"

char  *ft_strrchr(const char *s, int c)
{
	char  *res;

	res = NULL;
	while (*s)
	{
		if (*s == (char)c)
			res = (char *)s;
		s++;
	}
	if (*s == (char)c)
		res = (char *)s;
	return (res);
}
