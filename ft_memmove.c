/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:58:06 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/26 03:49:05 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dest, const void *src, size_t n )
{
	size_t			i;
	unsigned char	*destiny;
	unsigned char	*source;

	i = 0;
	if (!dest && !src)
		return (NULL);
	destiny = (unsigned char *)dest;
	source = (unsigned char *) src;
	if (destiny < source)
	{
		while (i < n)
		{
			*destiny++ = *source++;
			i++;
		}
	}
	else
	{
		while (n -- > 0)
		{
			destiny[n] = source[n];
		}
	}
	return (dest);
}
