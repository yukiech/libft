/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuber <ahuber@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:53:12 by ahuber            #+#    #+#             */
/*   Updated: 2021/09/05 22:21:03 by ahuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*block;

	if (lst)
	{
		while (*lst)
		{
			block = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = block;
		}
	}
}
