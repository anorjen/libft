/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspliter1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 17:14:55 by anorjen           #+#    #+#             */
/*   Updated: 2020/11/22 17:51:24 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*find_closed_bracket(char *str)
{
	char	opened;
	char	closed;
	int		i;
	int		count;

	opened = str[0];
	closed = 0;
	if (opened == '(')
		closed = ')';
	else if (opened == '[')
		closed = ']';
	else if (opened == '{')
		closed = '}';
	if (closed == 0)
		return (&(str[0]));
	count = 1;
	i = 0;
	while (str[++i] && count != 0)
	{
		if (str[i] == closed)
			--count;
		else if (str[i] == opened)
			++count;
	}
	return (count == 0 ? &(str[i]) : &(str[0]));
}

int		skip(int i, char *str)
{
	char	*end;

	end = NULL;
	if (ft_strchr("([{", str[i]) != NULL)
		end = ft_strchr(&(str[i]), ')');
	else if (ft_strchr("`\'\"", str[i]) != NULL)
	{
		end = ft_strchr(&(str[i + 1]), str[i]);
	}
	return (end == NULL ? 0 : (end - &(str[i])));
}

void	reset_delimeter(char *str, int length, char *delimeters)
{
	int	i;

	i = -1;
	while (++i < length)
	{
		if (ft_strchr("`\"\'([{", str[i]) != NULL)
		{
			i += skip(i, str);
			continue ;
		}
		if (ft_strchr(delimeters, str[i]) != NULL)
			str[i] = '\0';
	}
}
