/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uisprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:45:53 by anorjen           #+#    #+#             */
/*   Updated: 2020/11/22 19:36:25 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utf8.h"

int		ft_uisprint(t_usym c)
{
	if ((c > 0 && c < 32) || (c > 126 && c <= 128))
		return (0);
	return (1);
}
