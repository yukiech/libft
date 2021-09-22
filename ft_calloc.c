/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:51:36 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/02 23:51:38 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_nbr, size_t element_len)
{
	char	*ptr;

	ptr = malloc(element_nbr * element_len);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, element_nbr * element_len);
	return (ptr);
}
