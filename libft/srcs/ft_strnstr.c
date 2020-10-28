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

char	*ft_strnstr(const char *where, const char *what, size_t len)
{
	size_t	i;

	if (where == NULL || len == 0 || ft_strlen(what) > ft_strlen(where)
		|| ft_strlen(what) > len)
		return (NULL);
	if (what[0] == '\0' || what == NULL)
		return ((char *)where);
	if (len > ft_strlen(where))
		len = ft_strlen(where);
	i = 0;
	while (where[i] != '\0' && i <= len - ft_strlen(what))
	{
		if (ft_strncmp(&where[i], what, ft_strlen(what)) == 0)
			return ((char *)&where[i]);
		i++;
	}
	return (NULL);
}
