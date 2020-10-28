/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:27:25 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/23 16:27:25 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	ft_chrmem(char const *s, char c, char **arr)
{
	int	wlen;
	int	i;
	int	j;

	i = 0;
	j = 0;
	wlen = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			wlen++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			if ((arr[j] = (char *)malloc(sizeof(char) * (wlen + 1))) == NULL)
			{
				while (j >= 0)
					free(arr[j--]);
				return (0);
			}
			j++;
			wlen = 0;
		}
		i++;
	}
	return (1);
}

static void	ft_fillarr(char const *s, char c, char **arr)
{
	int		i;
	int		k;
	int		j;

	i = -1;
	k = 0;
	j = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
		{
			arr[k][j] = s[i];
			j++;
		}
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			arr[k][j] = '\0';
			k++;
			j = 0;
		}
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_wordcounter(s, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	arr[words] = NULL;
	if (ft_chrmem(s, c, arr) == 0)
		return (NULL);
	ft_fillarr(s, c, arr);
	return (arr);
}
