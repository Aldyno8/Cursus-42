/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:30:02 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/26 00:06:34 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *ptr1, const void *ptr2, size_t size )
{
	const unsigned char	*pointer1;
	const unsigned char	*pointer2;
	unsigned int		i;

	pointer1 = ptr1;
	pointer2 = ptr2;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		if (pointer1[i] != pointer2[i])
			return (pointer1[i] - pointer2[i]);
		i++;
	}
	if (i < size)
		return (pointer1[i] - pointer2[i]);
	return (0);
}
