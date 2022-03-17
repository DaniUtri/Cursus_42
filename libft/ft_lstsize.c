#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	l;

	if (!lst)
		return (0);
	l = 1;
	while (lst->next)
	{
		l++;
		lst = lst->next;
	}
	return (l);
}
