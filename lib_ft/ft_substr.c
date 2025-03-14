/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:38:55 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/14 14:35:24 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	char	*ft_substr(char const *s, unsigned int start, size_t len)
	{
		char	*str;
		int		i;

		i = 0;
		if (!s)
			return (NULL);
		if (start > ft_strlen(s))
			len = 0;
		else
		{
			if (len  > ft_strlen(s + start))
				len = ft_strlen(s + start);
		}
		str = (char *)malloc(sizeof(char) * len + 1);
		if (!str)
			return (NULL);
		str[len] = '\0';
		while (i < len)
		{
			str[i] = s[start];
			i ++;
			start ++;
		}
		return (str);
	}
