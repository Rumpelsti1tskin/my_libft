/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykisibek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:02:16 by ykisibek          #+#    #+#             */
/*   Updated: 2024/01/26 20:51:56 by ykisibek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
/*
void printf_list_nodes(t_list *list)
{
	while (list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}	
}

int	main()
{
	t_list	*list;
	char	s[] = "abcd";

	list = (t_list *)malloc(sizeof(t_list));
	list->content = s;
	list->next = NULL;
	
	t_list	next_node;
	next_node.content = "second node";
	next_node.next = NULL;

	list->next = &next_node;

	printf_list_nodes(list);
}*/
