/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:54:45 by bvelonja          #+#    #+#             */
/*   Updated: 2025/04/29 00:10:44 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == 'c')
				len += ft_putchar(va_arg(args, int));
			else if (*format == 's')
				len += ft_putstr(va_arg(args, char *));
			else if (*format == 'p')
				len += ft_putadr(va_arg(args, void *));
			else if (*format == 'd' || *format == 'i')
				len += ft_putnbr(va_arg(args, int));
			else if (*format == 'u')
				len += ft_putunbr(va_arg(args, unsigned int));
			else if (*format == 'x')
				len += ft_puthex(va_arg(args, unsigned int), 0);
			else if (*format == 'X')
				len += ft_puthex(va_arg(args, unsigned int), 1);
			else if (*format == '%')
				len += ft_putchar('%');
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
