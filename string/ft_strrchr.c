/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:00:02 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/22 13:29:02 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*s;

	i = 0;
	s = NULL;
	if ((char)ch == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			s = (char *)&str[i];
		i++;
	}
	return (s);
}
