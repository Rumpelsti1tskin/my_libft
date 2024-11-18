/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykisibek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:02:17 by ykisibek          #+#    #+#             */
/*   Updated: 2024/01/13 21:04:41 by ykisibek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	dest = ptr;
	i = 0;
	while (i < n)
	{
		dest[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}
