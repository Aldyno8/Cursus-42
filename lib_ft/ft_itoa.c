/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 08:19:10 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/18 09:21:33 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_digit(int n)
{
	int		count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nbr_digit;
	int		i;

	i = 0;
	nbr_digit = count_digit(n);
	str = malloc(sizeof(char) * nbr_digit + 1);
	if (n == -2147483648)
		return (ft_strjoin("-", "2147483648"));
	else if (n < 0)
	{
		n = n * -1;
		i = 1;
		str[0] = '-';
	}
	str[nbr_digit] = '\0';
	while (n > 9)
	{
		str[nbr_digit - 1] = (n % 10) + '0';
		n = n / 10;
		nbr_digit --;
	}
	str[i] = n + '0';
	return (str);
}
