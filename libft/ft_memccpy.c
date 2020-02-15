/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/21 15:00:02 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		if (*src == (unsigned char)c)
			return (dest);
		src++;
		n--;
	}
	return (NULL);
}
