/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ustr_empty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:27:55 by anorjen           #+#    #+#             */
/*   Updated: 2020/12/03 13:25:54 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utf8.h"

static int	is_space(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_uisprint(str[i]))
			return (0);
	}
	return (1);
}

int			ft_is_ustr_empty(char *str)
{
	return ((str == NULL || str[0] == '\0' || is_space(str)) ? 1 : 0);
}
