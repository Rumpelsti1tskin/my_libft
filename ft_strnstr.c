/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykisibek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:03:40 by ykisibek          #+#    #+#             */
/*   Updated: 2024/01/22 20:58:54 by ykisibek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0' || needle == haystack)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] != '\0' && i <= len)
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0' && (i + j) <= len)
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (NULL);
}
