/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 17:58:14 by anorjen           #+#    #+#             */
/*   Updated: 2020/03/19 18:48:44 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	*str_new(int length)
{
	t_string	*new;

	length = (length < -1 ? BUFF : length);
	new = (t_string*)malloc(sizeof(t_string));
	if (new)
	{
		new->str = (int*)malloc(sizeof(int) * (length + 1));
		if (new->str)
		{
			ft_memset(new->str, 0, (length + 1) * sizeof(int));
			new->length = 0;
			new->alloc = length;
		}
		else
			free(new);
	}
	return (new);
}
