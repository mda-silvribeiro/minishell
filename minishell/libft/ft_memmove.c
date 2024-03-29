/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:00:14 by mda-silv           #+#    #+#            */
/*   Updated: 2021/08/02 10:01:13 by mda-silv          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*result;

	if (!dst && !src)
		return (0);
	result = dst;
	if (src < dst)
	{
		src += len;
		dst += len;
		while (len--)
			(*(char *)--dst) = (*(char *)--src);
	}
	else
		while (len--)
			(*(char *)dst++) = (*(char *)src++);
	return (result);
}
