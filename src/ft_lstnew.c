#include "libft.h"

t_list* ft_lstnew(void const *content, size_t content_size)
{
  t_list *node;

  node = (t_list *)malloc(sizeof(t_list));
  if (!node)
    return (NULL);
  node->next = NULL;
  node->content = NULL;
  node->content_size = 0;
  if (content)
	{
		if (content_size > 0)
		{
			node->content = malloc(content_size);
			if (!node->content)
			{
				free(node);
				return (NULL);
			}
			ft_memcpy(node->content, content, content_size);
		}
		else
			node->content = NULL;
		node->content_size = content_size;
	}
  return (node);
}
