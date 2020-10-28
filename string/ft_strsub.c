/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/23 15:29:02 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new;
	int				t;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (NULL);
	new = (char *)malloc(len + 1);
	if (new == NULL)
		return (NULL);
	t = 0;
	i = start - 1;
	while (++i < (unsigned int)(len + start))
	{
		if (s[i] == '\0')
			t = 1;
		if (t != 1)
			new[i - start] = s[i];
		else
			new[i - start] = '\0';
	}
	new[len] = '\0';
	return (new);
}
