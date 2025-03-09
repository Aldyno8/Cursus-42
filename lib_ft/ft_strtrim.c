/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:26:36 by marvin            #+#    #+#             */
/*   Updated: 2025/03/09 19:26:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	str = malloc(sizeof(char) * (end - start + 1));

	if (!s1 || !set)
		return (NULL);
	if (!str)
		return (NULL);
	while (end > start && s1[start] && s1[end -1])
	{
		if (ft_strchr(set, s1[start]))
			start++;
		if (ft_strchr(set, s1[end - 1]))
			end--;
		else
			break;
	}
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
