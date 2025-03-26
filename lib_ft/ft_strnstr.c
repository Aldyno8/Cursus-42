/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:43:50 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/26 03:14:17 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
    int				i;
    int				j;
	int				tpr;
	const char		*tmp;

	tmp = str;
    j = 0;
    if (*to_find == '\0')
        return ((char *)str);
    while (*tmp && j < len)
    {
        i = 0;
		tpr = j;
    		while (tmp[i] == to_find[i] && to_find[i] && j ++< len)
				i ++;
			if (to_find[i] == '\0')
				return ((char *)tmp);
		j = tpr;
		j ++;
		tmp++;
	}
	return (NULL);
}
