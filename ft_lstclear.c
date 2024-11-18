/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykisibek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:56:48 by ykisibek          #+#    #+#             */
/*   Updated: 2024/03/26 16:31:12 by ykisibek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextnode;

	if (!lst || *lst == NULL)
		return ;
	if ((*lst)->next == NULL)
	{
		del((*lst)->content);
		free(*lst);
		return ;
	}
	nextnode = *lst;
	while (*lst != NULL)
	{
		del((*lst)->content);
		nextnode = (*lst)->next;
		free(*lst);
		*lst = nextnode;
	}
}
