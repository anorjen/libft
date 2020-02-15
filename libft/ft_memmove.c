/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/21 15:00:02 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (dest <= src || dest >= (src + n))
	{
		while (n--)
			*dest++ = *src++;
	}
	else
	{
		dest = dest + n - 1;
		src = src + n - 1;
		while (n--)
			*dest-- = *src--;
	}
	return (destination);
}
