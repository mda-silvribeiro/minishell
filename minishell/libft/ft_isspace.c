/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:37:42 by mda-silv           #+#    #+#            */
/*   Updated: 2021/02/25 11:11:59 by mda-silv          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\f'
		||c == '\v' || c == '\n' || c == '\r')
		return (1);
	return (0);
}
