/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:45:15 by mda-silv           #+#    #+#            */
/*   Updated: 2021/02/25 11:46:10 by mda-silv          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (!result)
		return (0);
	ft_memcpy(result, s, n);
	result[n] = '\0';
	return (result);
}
