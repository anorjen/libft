/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/23 15:29:02 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	size_t	len1;
	size_t	i;
	char	*new;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strndup(s2, n));
	if (s2 == NULL || n == 0)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	if (n > ft_strlen(s2))
		n = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (new == NULL)
		return (NULL);
	i = -1;
	while (++i < len1)
		new[i] = s1[i];
	while ((++i - 1 - len1) < n)
		new[i - 1] = s2[i - 1 - len1];
	new[i - 1] = '\0';
	return (new);
}
