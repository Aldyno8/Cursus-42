/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:17:31 by bvelonja          #+#    #+#             */
/*   Updated: 2025/04/03 00:44:54 by bvelonja         ###   ########.fr       */
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

static void	free_split(char **str1, int k)
{
	while (k > 0)
	{
		free(str1[k - 1]);
		k--;
	}
	free(str1);
}

static char	*get_word(const char *s, int *i, char c)
{
	int		j;
	int		len;

	j = *i;
	len = 0;
	while (s[*i] && s[*i] != c)
	{
		(*i)++;
		len++;
	}
	return (ft_substr(s, j, len));
}

char	**ft_split(char const *s, char c)
{
	char	**str1;
	int		i;
	int		k;

	i = 0;
	k = 0;
	str1 = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str1)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		str1[k] = get_word(s, &i, c);
		if (!str1[k])
		{
			free_split(str1, k);
			return (NULL);
		}
		k++;
	}
	str1[k] = NULL;
	return (str1);
}
