/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:58:07 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/02 23:58:08 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	while (len > 0 && *str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		len--;
	}
	if (len == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
