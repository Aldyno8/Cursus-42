/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:43:30 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/07 13:10:51 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr( const char *str, int searchedChar )
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (str[i])
	{
		if (str[i] == searchedChar)
		{
			ptr = ((char *) str + i);
			return (ptr);
		}
		i ++;
	}
	return (ptr);
}
