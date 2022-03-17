#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(list));
	if (!list)
		return (0);
	list->content = content;
	list->next = 0;
	return (list);
}
