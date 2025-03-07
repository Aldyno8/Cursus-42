/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:24:59 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/07 11:24:48 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		*d;
	const unsigned int	*s;

	d = dest;
	s = src;
	while (n > 0)
	{
		*d ++ = *s ++;
		n --;
	}
	return (dest);
}
