/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:12:08 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/26 00:20:16 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *ptr, int searchedChar, size_t size )
{
	const unsigned char	*pointer;
	int					i;

	i = 0;
	pointer = ptr;
	while (size > 0)
	{
		if (pointer[i] == (unsigned char) searchedChar)
			return ((char *)(pointer + i));
		size --;
		i ++;
	}
	return (NULL);
}
