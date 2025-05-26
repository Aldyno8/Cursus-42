/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:11:03 by bvelonja          #+#    #+#             */
/*   Updated: 2025/05/26 17:49:16 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr( const char *str, int searchedChar )
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (char) searchedChar)
		{
			ptr = ((char *) str + i);
			return (ptr);
		}
		i ++;
	}
	return (ptr);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
	{
		i ++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *str1, const char *str2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str1 && !str2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!str)
		return (NULL);
	while (str1 && str1[i])
	{
		str[i] = str1[i];
		i ++;
	}
	while (str2 && str2[j])
	{
		str[i] = str2[j];
		i ++;
		j ++;
	}
	str[i] = '\0';
	return (str);
}
