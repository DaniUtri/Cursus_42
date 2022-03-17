#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (ft_lstlast(*lst))
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
