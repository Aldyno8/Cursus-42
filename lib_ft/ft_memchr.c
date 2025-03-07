/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:12:08 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/07 13:29:34 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr( const void *ptr, int searchedChar, size_t size )
{
	const unsigned char	*pointer;

	pointer = ptr;
	while (size > 0)
	{
		if (*pointer++ == searchedChar)
			return (((char *) pointer));
		size --;
	}
	return (NULL);
}
