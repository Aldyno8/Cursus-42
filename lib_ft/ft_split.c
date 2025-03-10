/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:17:31 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/10 13:18:33 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**str1;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = ft_strtrim(s, c);
	str1 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (i < ft_strlen(str))
	{
		if (str[i] == c)
		{
			*str1 = malloc(sizeof(char) * (i - j + 1));
			ft_strlcpy(*str1, str + j, i - j + 1);	
			*str1 ++;
			j = i;
		}
		i ++;
	}
}