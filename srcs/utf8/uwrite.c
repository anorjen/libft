/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uwrite.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:06:27 by anorjen           #+#    #+#             */
/*   Updated: 2020/11/23 11:33:12 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utf8.h"

ssize_t	uwrite(int fd, uint32_t *buf, size_t n)
{
	char		*out;
	uint32_t	*tmp;

	tmp = ft_ustrnew(n);
	ft_memcpy(tmp, buf, n * sizeof(uint32_t));
	if ((out = ft_utoc(tmp)) == NULL)
		return (-1);
	write(fd, out, ft_strlen(out));
	free(out);
	free(tmp);
	return (n);
}
