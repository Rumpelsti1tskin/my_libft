/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykisibek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:33:00 by ykisibek          #+#    #+#             */
/*   Updated: 2024/01/13 19:21:32 by ykisibek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if (('a' <= argument && argument <= 'z')
		|| ('A' <= argument && argument <= 'Z')
		|| ('0' <= argument && argument <= '9'))
		return (1);
	else
		return (0);
}
