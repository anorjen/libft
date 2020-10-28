/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2020/03/19 18:21:04 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int		str_cmp(t_string *s1, t_string *s2)
{
	int	i;

	i = 0;
	while ((s1->str)[i] == (s2->str)[i] && (s1->str)[i] != 0 && (s2->str)[i] != 0)
		i++;
	return ((s1->str)[i] - (s2->str)[i]);
}