/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 00:00:42 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/03 00:00:44 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *foin, const char *aiguille, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (aiguille[0] == '\0')
		return ((char *)foin);
	while (foin[i] && i < len)
	{
		while (aiguille[j] && foin[i + j] && (foin[i + j] == aiguille[j])
			&& (i + j) < len)
		{
			if (j == (ft_strlen(aiguille) - 1))
				return ((char *)&foin[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
