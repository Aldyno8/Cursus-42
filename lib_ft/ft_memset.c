/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:36:21 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/07 09:18:47 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset( void *pointer, int value, size_t count )
{
	unsigned char	*ptr;

	ptr = pointer;
	while (count > 0)
	{
		*ptr ++ = value;
		count --;
	}
	return (pointer);
}
