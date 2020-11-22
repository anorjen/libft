/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspliter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 15:07:52 by anorjen           #+#    #+#             */
/*   Updated: 2020/11/22 17:52:08 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char *str, int length)
{
	int	i;
	int	s;
	int counter;

	s = 0;
	counter = 0;
	i = -1;
	while (++i < length)
	{
		if (s == 0 && str[i] != '\0')
			s = 1;
		if (s == 1 && str[i] == '\0')
		{
			s = 0;
			++counter;
		}
	}
	return (s == 1 ? counter + 1 : counter);
}

static void	free_words(char **words, int num)
{
	int	i;

	if (words)
	{
		i = -1;
		while (++i < num)
			free(words[i]);
		free(words);
	}
}

static char	**init_words(int size)
{
	char	**words;
	int		i;

	if ((words = (char **)malloc(sizeof(char*) * (size + 1))) == NULL)
		return (NULL);
	i = -1;
	while (++i < size + 1)
		words[i] = NULL;
	return (words);
}

static void	set_words(char **words, char *str, int len)
{
	int		i;
	char	*begin;
	char	*word;
	int		j;

	begin = NULL;
	j = 0;
	i = -1;
	while (++i <= len)
	{
		if (begin == NULL && str[i] != '\0')
			begin = &(str[i]);
		if (begin != NULL && str[i] == '\0')
		{
			if ((word = ft_strdup(begin)) == NULL)
			{
				free_words(words, j);
				words = NULL;
				break ;
			}
			words[j++] = word;
			begin = NULL;
		}
	}
}

char		**ft_strspliter(char const *s, char *delimeters)
{
	char	*str;
	int		length;
	char	**words;

	if ((str = ft_strtrim(s)) == NULL)
		return (NULL);
	length = ft_strlen(str);
	reset_delimeter(str, length, delimeters);
	if ((words = init_words(word_counter(str, length))) == NULL)
		return (NULL);
	set_words(words, str, length);
	free(str);
	return (words);
}
