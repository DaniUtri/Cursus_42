#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_2;
	t_list	*first;

	if (!lst || !f || !del)
		return (0);
	lst_2 = ft_lstnew(f(lst->content));
	if (!lst_2)
		return (0);
	first = lst_2;
	lst = lst->next;
	while (lst)
	{
		if (!ft_lstnew(f(lst->content)))
		{
			ft_lstclear(&first, del);
			return (0);
		}
		ft_lstadd_back(&lst_2, ft_lstnew(f(lst->content)));
		lst = lst->next;
		lst_2 = lst_2->next;
	}
	return (lst_2);
}
