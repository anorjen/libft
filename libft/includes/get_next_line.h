/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:35:38 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/29 16:35:38 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# include <stdio.h>
# include "./libft/libft.h"
# define BUFF_SIZE 32

typedef struct	s_gnl
{
	int				fd;
	char			buf[BUFF_SIZE + 1];
	struct s_gnl	*next;
}				t_gnl;

int				get_next_line(const int fd, char **line);

#endif
