/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:43:30 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/25 23:47:58 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( const char *str, int searchedChar )
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (char) searchedChar)
		{
			ptr = ((char *) str + i);
			return (ptr);
		}
		i ++;
	}
	return (ptr);
}
