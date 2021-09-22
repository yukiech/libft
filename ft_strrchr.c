/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 00:02:38 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/03 00:02:39 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (char)c)
		{
			j = i;
			k = 1;
		}
		i++;
	}
	if (k != 0)
		return ((char *)&str[j]);
	else
		return (NULL);
}
