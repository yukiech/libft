/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:57:34 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/02 23:57:35 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < len - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < len)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
