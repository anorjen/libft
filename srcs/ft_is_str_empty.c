/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_str_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:30:44 by anorjen           #+#    #+#             */
/*   Updated: 2020/12/03 13:54:09 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!((str[i] > 0 && str[i] < 32) || (str[i] == 127)))
			return (0);
	}
	return (1);
}

int			ft_is_str_empty(char *str)
{
	return ((str == NULL || str[0] == '\0' || is_space(str)) ? 1 : 0);
}
