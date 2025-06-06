/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:33:51 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/26 08:07:10 by bvelonja         ###   ########.fr       */
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
	str = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2)) + 1);
	if (!str)
		return (NULL);
	while (str1[i])
	{
		str[i] = str1[i];
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
