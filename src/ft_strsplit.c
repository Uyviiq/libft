#include "libft.h"

static int count_words(char const *s, char c)
{
  int count = 0;
  while (*s)
  {
    if (*s != c)
      count++;
    while (*s && *s != c)
      s++;
    while (*s && *s == c)
      s++;
  }
  return (count);
}

static int count_chars(char const *s, char c)
{
  int count = 0;
  while (*s && *s != c)
  {
    s++;
    count++;
  }
  return (count);
}

static void word_copy(char *dst,const char **src, char c)
{
  while (**src && **src != c)
    *dst++ = *(*src)++;
  *dst++ = '\0';
}

char  **ft_strsplit(char const *s, char c)
{
  char **res = (char **)malloc(sizeof(char *) * (count_words(s,c) + 1));
  int i = 0;
  if (!res)
    return (NULL);
  while (*s)
  {
    while (*s && *s == c)
      s++;
    while (*s && *s != c)
    {
      res[i] = (char *)malloc(count_chars(s,c) + 1);
      if (!res[i])
      {
        while (i--)
          free(res[i]);
        return (NULL);
      }
      word_copy(res[i],&s,c);
      i++;
    }
  }
  res[i] = NULL;
  return (res);
}
