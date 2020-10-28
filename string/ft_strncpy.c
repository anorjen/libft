/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/22 13:29:02 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destination, const char *source, size_t n)
{
	size_t	i;
	int		k;

	i = 0;
	k = 0;
	while (i < n)
	{
		if (source[i] == '\0')
			k = 1;
		if (k != 1)
			destination[i] = source[i];
		else
			destination[i] = '\0';
		i++;
	}
	return (destination);
}
