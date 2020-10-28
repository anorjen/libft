/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <anorjen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 17:46:44 by anorjen           #+#    #+#             */
/*   Updated: 2020/03/19 18:57:07 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

#define BUFF 10

typedef struct	s_string
{
	int			*str;
	int			length;
	int			alloc;
}				t_string;

t_string		*str_new();
void			str_clr(t_string *s);
int				str_cmp(t_string *s1, t_string *s2);
void			str_del(t_string *as);

t_string		*str_cat();


#endif
