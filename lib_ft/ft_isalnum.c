/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:29:16 by bvelonja          #+#    #+#             */
/*   Updated: 2025/03/05 15:29:19 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0' )
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalnum(c) || ft_isdigit(c))
		return (1);
	return (0);
}
