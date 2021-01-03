/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:45:09 by anorjen           #+#    #+#             */
/*   Updated: 2020/12/02 10:45:20 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*ft_strtolower(unsigned char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'A') && (s[i] <= 'Z'))
			s[i] += 32;
		i++;
	}
	return (s);
}
