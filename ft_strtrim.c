/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykisibek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:36:55 by ykisibek          #+#    #+#             */
/*   Updated: 2024/01/25 17:11:08 by ykisibek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*nolength(char const *str)
{
	char	*no;

	(void)str;
	no = (char *)malloc(1);
	no[0] = '\0';
	return (no);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = 0;
	i = 0;
	if (!s1)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (nolength(s1));
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	while (ft_strchr(set, s1[ft_strlen(s1) - end - 1])
		&& (ft_strlen(s1) - end - 1) > start)
		end++;
	ptr = (char *)malloc((ft_strlen(s1) - start - end + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + start, ft_strlen(s1) - start - end + 1);
	return (ptr);
}
