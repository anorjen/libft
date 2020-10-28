/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_ncat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2020/03/19 18:58:01 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	*str_ncat(t_string *dest, t_string *app, size_t n)
{
	int			i;
	size_t		j;
	t_string	*new;
	int			available;

	available = dest->alloc - dest->length;
	if (available < app->length)
	{
		new = str_new((((dest->length + app->length) / 10) + 1) * 10);
		i = -1;
		while(++i < dest->length)
			new->str[i] = dest->str[i];
		new->length = dest->length;
		str_del(dest);
		dest = new;
	}
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (app[j] != '\0' && j < n)
	{
		dest[i] = app[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
