/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_str_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:27:55 by anorjen           #+#    #+#             */
/*   Updated: 2020/11/27 09:47:42 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_isprint(str[i]))
			return (0);
	}
	return (1);
}

int			ft_is_str_empty(char *str)
{
	return ((str == NULL || str[0] == '\0' || is_space(str)) ? 1 : 0);
}
