/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:41:01 by marvin            #+#    #+#             */
/*   Updated: 2025/03/03 19:41:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	ft_atoi(char *str)
{
	int	signe;
	int	result;
	int	j;

	result = 0;
	j = 0;
	signe = 1;
	while ((str[j] <= 13 && str[j] >= 9) || str[j] == 32)
		j ++;
	while (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
			signe *= -1;
		j ++;
	}
	while (str[j] <= '9' && str[j] >= '0')
	{
		result = result * 10 + str[j] - '0';
		j ++;
	}
	result *= signe;
	return (result);
}