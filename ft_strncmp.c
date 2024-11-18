/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykisibek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:38:03 by ykisibek          #+#    #+#             */
/*   Updated: 2024/01/22 20:56:26 by ykisibek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			a;
	unsigned char	*s1;
	unsigned char	*s2;

	a = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while ((s1[a] != '\0' || s2[a] != '\0') && (a < n))
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
