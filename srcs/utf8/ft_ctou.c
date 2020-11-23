/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctou.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 12:54:21 by anorjen           #+#    #+#             */
/*   Updated: 2020/11/23 15:41:19 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utf8.h"

static size_t	sym_size(char c)
{
	size_t	i;

	i = 0;
	while ((c & (0x80 >> i)) != 0)
	{
		++i;
	}
	return (i);
}

static size_t	input(uint32_t *buf, char *s)
{
	size_t	l;
	ssize_t	i;

	l = sym_size(s[0]);
	if (l > 4)
		return (0);
	*buf = (s[l - 1] & 0x000000ff);
	i = l - 1;
	while (--i >= 0)
	{
		*buf <<= 8;
		*buf |= (s[i] & 0x000000ff);
	}
	return (l);
}

t_usym		*ft_ctou(char *s)
{
	size_t		size;
	t_usym		*out;
	t_usym		*tmp;
	size_t		i;

	size = ft_strlen(s);
	if ((out = ft_ustrnew(size)) == NULL)
		return (NULL);
	tmp = out;
	i = -1;
	while (++i < size)
	{
		if ((uint8_t)s[i] < 128)
			*(tmp++) = (uint32_t)(s[i] & 0x000000ff);
		else
		{
			i += input(tmp++, &(s[i])) - 1;
		}
	}
	*tmp = 0;
	return (out);
}
