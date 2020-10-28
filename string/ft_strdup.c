/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2020/03/19 18:27:50 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	*ft_strdup(t_string *str)
{
	t_string	*new;
	int			len;
	int			i;

	len = str->length;
	new = str_new();
	if (new == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		(new->str)[i] = (str->str)[i];
		
	}
	new_str[i] = '\0';
	return (new_str);
}
