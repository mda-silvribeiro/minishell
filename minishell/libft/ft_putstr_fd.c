/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*  By: mda-silv <mda-silv@student.42.fr>           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:59:21 by mda-silv           #+#    #+#            */
/*   Updated: 2021/02/25 10:16:47 by mda-silv          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	if (s == NULL)
		return (ret);
	while (s[i] != '\0')
	{
		ret += write(fd, &s[i], 1);
		i++;
	}
	return (ret);
}
