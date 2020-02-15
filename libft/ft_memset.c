/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/21 15:00:02 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	ch;

	ch = (unsigned char)c;
	dest = (unsigned char *)destination;
	while (n > 0)
	{
		*dest = ch;
		dest++;
		n--;
	}
	return (destination);
}
