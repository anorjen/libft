/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:27:25 by anorjen           #+#    #+#             */
/*   Updated: 2020/03/19 18:17:40 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	str_clr(t_string *s)
{
	size_t	len;

	if (!s)
		return ;
	len = s->length;
	ft_memset(s, 0, len * sizeof(int));
}
