/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:33:51 by marvin            #+#    #+#             */
/*   Updated: 2025/03/10 12:36:33 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, const char *str2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str1 || !str2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!str)
		return (NULL);
	while (str1[i])
	{
		str[i] = str1[i];
		printf("str1: %s\n", str);
		i ++;
	}
	while (str2[j])
	{
		str[i] = str2[j];
		i ++;
		j ++;
	}
	str[i] = '\0';
	return (str);
}
