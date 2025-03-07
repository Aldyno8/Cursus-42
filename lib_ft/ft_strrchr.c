/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:34:04 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/07 13:10:48 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr( const char *str, int searchedChar )
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
		}
		i ++;
	}
	return (ptr);
}
