/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:35:00 by bvelonja          #+#    #+#             */
/*   Updated: 2025/04/11 21:06:44 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (*str)
	{
		len += ft_putchar(*str);
		str ++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		len += ft_putnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putunbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}

int	ft_puthex(unsigned long n, int is_upper)
{
	char	*base;
	int		len;

	len = 0;
	if (is_upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		len += ft_puthex(n / 16, is_upper);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_putadr(void *ptr)
{
	int				len;
	unsigned long	adresse;

	if (!ptr)
		return (ft_putstr("(null)"));
	len = 0;
	adresse = (unsigned long)ptr;
	len += ft_putstr("0x");
	len += ft_puthex(adresse, 0);
	return (len);
}
