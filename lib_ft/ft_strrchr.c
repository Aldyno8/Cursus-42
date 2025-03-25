/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:34:04 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/25 23:48:54 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( const char *str, int searchedChar )
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (char)searchedChar)
		{
			ptr = ((char *) str + i);
		}
		i ++;
	}
	return (ptr);
}
