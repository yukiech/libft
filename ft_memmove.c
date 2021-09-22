/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:55:29 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/05 18:57:49 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dest, const void *src, size_t size)
{
	unsigned char		*dest2;
	const unsigned char	*src2;
	size_t				i;

	dest2 = (unsigned char *) dest;
	src2 = (unsigned char *) src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src2 < dest2)
		while (++i <= size)
			dest2[size - i] = src2[size - i];
	else
		while (size-- > 0)
			*(dest2++) = *(src2++);
	return (dest);
}
