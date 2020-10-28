/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:27:25 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/23 16:27:25 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*new;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (i == ft_strlen(s))
		return (ft_strdup(""));
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	new = (char *)malloc(sizeof(char) * (j - i + 2));
	if (new == NULL)
		return (NULL);
	k = -1;
	while (s[i] != '\0' && ++k < j - i + 1)
		new[k] = s[i + k];
	new[k] = '\0';
	return (new);
}
