/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2020/03/19 18:34:33 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	str_ncat(char *dst, const char *src, size_t siz)
{
	size_t		n;
	size_t		dlen;

	if ((dlen = ft_strlen(dst)) > siz)
		dlen = siz;
	n = siz - dlen;
	if (n > 1)
		ft_strncat(dst, src, n - 1);
	return (dlen + ft_strlen(src));
}
