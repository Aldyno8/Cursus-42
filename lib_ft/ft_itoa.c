#include "libft.h"
#include <stdio.h>

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

char *ft_itoa(int n)
{
	char	*str;
	int		nbr_digit;
	int		i;

	i = 0;
	nbr_digit = count_digit(n);
	str = malloc(sizeof(char) * nbr_digit + 1);
	if (n < 0)
	{
		n = n * -1;
		i = 1;
		str[0] = '-';
	}
	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	str[nbr_digit] = '\0';
	while (n > 9)
	{
		str[nbr_digit - 1]  = (n % 10) + '0';
		n = n / 10;
		nbr_digit --;
	}
	str[i] = n + '0';
	return (str);
}
