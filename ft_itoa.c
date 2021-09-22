/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:52:37 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/06 12:18:04 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_troplongue(long stock_n, char *str, int i)
{
	while (stock_n > 0)
	{
		str[i--] = (stock_n % 10) + 48;
		stock_n = stock_n / 10;
	}
}

char	*ft_itoa(int n)
{
	long	stock_n;
	int		i;
	char	*str;

	stock_n = n;
	i = ft_nbrlen(stock_n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (stock_n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (stock_n < 0)
	{
		str[0] = '-';
		stock_n *= -1;
	}
	ft_troplongue(stock_n, str, i);
	return (str);
}
