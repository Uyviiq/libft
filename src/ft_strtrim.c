#include "libft.h"

char  *ft_strtrim(char const *s)
{
	size_t  start;
	size_t  end;
	size_t  i;
	char  *trimmed;

	if (!s)
		return (NULL);

	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;

	end = start;
	while (s[end])
		end++;

	while (end > start &&
		(s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t'))
		end--;

	trimmed = malloc(sizeof(char) * (end - start + 1));
	if (!trimmed)
		return (NULL);

	i = 0;
	while (start < end)
		trimmed[i++] = s[start++];

	trimmed[i] = '\0';
	return (trimmed);
}
