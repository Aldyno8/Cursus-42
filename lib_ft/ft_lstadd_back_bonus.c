/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:20:31 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/18 09:22:07 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL )
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp -> next)
	{
		temp = temp -> next;
	}
	temp = new;
}
