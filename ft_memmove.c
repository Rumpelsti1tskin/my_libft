/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykisibek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:05:03 by ykisibek          #+#    #+#             */
/*   Updated: 2024/01/16 19:23:21 by ykisibek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*to;
	unsigned char	*from;

	i = 0;
	if (size != 0 && dest == NULL && src == NULL)
		return (NULL);
	from = (unsigned char *) src;
	to = (unsigned char *) dest;
	if (dest > src)
	{
		while (size > 0)
		{
			to[size - 1] = from[size - 1];
			size--;
		}
		return (dest);
	}
	while (i < size)
	{
		to[i] = from[i];
		i++;
	}
	return (dest);
}
