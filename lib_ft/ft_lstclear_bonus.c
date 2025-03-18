#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst) -> next;
		del((*lst) -> content);
		free(temp);
		*lst = temp;
	}	
}