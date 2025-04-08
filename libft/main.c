#include <stdio.h>
#include "libft.h"
#include <fcntl.h>
#include <bsd/string.h>

int	main(void)
{
	t_list *head;
	t_list *lst;

	head = ft_lstnew("test");
	lst = ft_lstnew("test 2");
	ft_lstadd_back(&head, lst);
	printf("%s", (char *)head->content);
	printf("%s", (char *)head->next->content);
	
	printf("%s", ft_itoa(-123));
	return (0);
}
