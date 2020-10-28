/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/22 13:29:02 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstrn(const char *where, const char *what, size_t len)
{
	size_t	i;

	if (where == NULL || len == 0 ||
			(len > ft_strlen(where) && len <= ft_strlen(what))
			|| (len > ft_strlen(what) && ft_strlen(what) > ft_strlen(where)))
		return (NULL);
	if (what[0] == '\0' || what == NULL)
		return ((char *)where);
	if (len > ft_strlen(what))
		len = ft_strlen(what);
	i = 0;
	while (where[i] != '\0' && i <= (ft_strlen(where) - len))
	{
		if (ft_strncmp(&where[i], what, len) == 0)
			return ((char *)&where[i]);
		i++;
	}
	return (NULL);
}
