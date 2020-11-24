/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 17:19:27 by anorjen           #+#    #+#             */
/*   Updated: 2020/11/24 10:42:47 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_strrsize(char *dest, char *app, size_t n)
{
	char	*buf;

	buf = NULL;
	if (app)
	{
		if (dest != NULL)
		{
			buf = ft_strdup(dest);
			free(dest);
			dest = ft_strnjoin(buf, app, n);
			free(buf);
		}
		else
			dest = ft_strnjoin(dest, app, n);
		if (n == ft_strlen(app))
			app[0] = '\0';
		else
			ft_strcpy(app, &app[n + 1]);
		return (dest);
	}
	return (NULL);
}

static int		ft_gnladd(t_gnl **lst, int fd, char *buf)
{
	t_gnl	*new;

	if ((new = (t_gnl *)malloc(sizeof(t_gnl))) == NULL)
		return (-1);
	new->fd = fd;
	ft_strcpy(new->buf, buf);
	new->next = NULL;
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		(*lst) = new;
	return (1);
}

static t_gnl	*ft_findfd(t_gnl *lst, int fd, char *buf)
{
	while (lst)
	{
		if (fd == lst->fd)
		{
			ft_strcpy(buf, lst->buf);
			return (lst);
		}
		lst = lst->next;
	}
	return (NULL);
}

static ssize_t	ft_gnl(const int fd, char **line, ssize_t end, char *buf)
{
	ssize_t	chrs;

	while (end < 0)
	{
		if ((end = (ssize_t)(ft_strchr(buf, '\n') - buf)) < 0)
		{
			if (buf[0] != '\0')
			{
				if ((*line = ft_strrsize(*line, buf, ft_strlen(buf))) == NULL)
					return (-1);
			}
			if ((chrs = read(fd, buf, BUFF_SIZE)) <= 0)
				break ;
			buf[chrs] = '\0';
		}
		else
		{
			if ((*line = ft_strrsize(*line, buf, end)) == NULL)
				return (-1);
		}
	}
	if (*line)
		return (1);
	else
		return (chrs);
}

int				get_next_line(const int fd, char **line)
{
	static t_gnl	*lst;
	t_gnl			*alst;
	ssize_t			end;
	char			buf[BUFF_SIZE + 1];
	ssize_t			res;

	if (fd < 0 || fd == 1 || fd == 2 || line == NULL)
		return (-1);
	end = -1;
	*line = NULL;
	if ((alst = ft_findfd(lst, fd, buf)) == NULL)
	{
		if ((res = read(fd, buf, BUFF_SIZE)) <= 0)
			return (res);
		buf[res] = '\0';
	}
	res = ft_gnl(fd, line, end, buf);
	if (!alst)
	{
		if (ft_gnladd(&lst, fd, buf) == -1)
			return (-1);
	}
	else
		ft_strcpy(alst->buf, buf);
	return (res);
}
