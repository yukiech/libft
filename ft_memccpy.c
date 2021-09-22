/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:54:47 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/02 23:54:48 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst2;
	const unsigned char	*src2;
	size_t				i;

	dst2 = (unsigned char *) dst;
	src2 = (unsigned char *) src;
	i = 0;
	while (n > i)
	{
		dst2[i] = src2[i];
		if (src2[i] == (unsigned char) c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
