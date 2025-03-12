/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:17:31 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/12 08:24:41 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str1;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	str1 = malloc(sizeof(char) * (count_words(s, c) + 1));
	if (!str1)
		return (NULL);
	while (s[i])
	{
		while (s[i ++] == c)
		j = i;
		while (s[i] != c && s[i])
			i ++;
		if (i > j)
		{
			str1[k] = malloc(sizeof(char) * (i - j + 1));
			ft_strlcpy(str1[k ++], s + j, i - j + 1);
		}
	}
	str1[k] = NULL;
	return (str1);
}
