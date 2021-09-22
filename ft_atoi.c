/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:50:45 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/06 12:46:28 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skipspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const	char *str)
{
	int	result;
	int	sign;
	int	int_len;

	result = 0;
	sign = 1;
	int_len = 0;
	while (skipspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str++ - '0');
		int_len++;
	}
	if (int_len > 10 && sign == 1)
		return (-1);
	else if (int_len > 10)
		return (0);
	return (result * sign);
}
