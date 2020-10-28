/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/22 13:29:02 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *where, const char *what)
{
	size_t	i;

	i = -1;
	if (what[0] == '\0')
		return ((char *)where);
	while (where[++i] != '\0' && i <= (ft_strlen(where) - ft_strlen(what)))
	{
		if (ft_strncmp(&where[i], what, ft_strlen(what)) == 0)
			return ((char *)&where[i]);
	}
	return (NULL);
}
