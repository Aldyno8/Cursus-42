/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:53:59 by marvin            #+#    #+#             */
/*   Updated: 2025/03/04 08:53:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t 	i;

	i = 0;
	if (!src)
		return (0);
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i ++;
	}
	return (i);
}
