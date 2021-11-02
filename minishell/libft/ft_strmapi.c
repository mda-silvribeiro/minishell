/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:35:36 by mda-silv           #+#    #+#            */
/*   Updated: 2021/02/27 13:06:44 by mda-silv          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*map;
	unsigned int	count;

	len = ft_strlen(s);
	map = (char *)malloc(sizeof(char) * len + 1);
	if (!map)
		return (NULL);
	count = 0;
	while (s[count])
	{
		map[count] = f(count, s[count]);
		count++;
	}
	map[count] = 0;
	return (map);
}
