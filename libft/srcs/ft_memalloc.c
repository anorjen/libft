/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:27:25 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/23 12:27:25 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t			i;

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
