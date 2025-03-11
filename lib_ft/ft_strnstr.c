/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:43:50 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/07 13:56:50 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int			i;
	const char	*tmp;

	tmp = str;
	if (*to_find == '\0')
		return ((char *)str);
	while (*tmp && len > 0)
	{
		i = 0;
		if (*tmp == to_find[0])
		{
			while (tmp[i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return ((char *)tmp);
		}
		tmp++;
		len --;
	}
	return (NULL);
}
