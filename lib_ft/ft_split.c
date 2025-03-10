/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:17:31 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/10 10:03:38 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**alloc_memory(char **str, int len)
{
	int	i;

	i = 0;
	*str = malloc(sizeof(char) * len);
	if (!*str)
		return (NULL);
	while (i <= len)
	{
		*str[i] = malloc(sizeof(char) * 42);
		i ++;
	}
	if (!str)
		return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		count;
	int		len;

	i = 0;
	j = 0;
	c = 0;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	str = alloc_memory(str, len);
	if (!str)
		return (NULL);
	while (s[count])
	{
		if (s[count] != c)
		{
			str[i][j] = s[count];
			count ++;
		}
		else
		{
			j = 0;
			i ++;
			count ++;
		}
	}
}
