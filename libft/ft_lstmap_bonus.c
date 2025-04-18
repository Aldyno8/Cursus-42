/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:20:51 by bvelonja          #+#    #+#             */
/*   Updated: 2025/04/07 09:59:25 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_element = ft_lstnew(f(lst -> content));
		if (new_element == NULL)
		{
			while (new_list)
			{
				new_element = new_list-> next;
				del(new_list-> content);
				free(new_list);
				new_list = new_element;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst -> next;
	}
	return (new_list);
}
