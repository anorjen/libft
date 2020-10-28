/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:56:25 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/26 12:56:25 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	if (newlst == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
	}
	else
	{
		newlst->content = malloc(content_size);
		ft_memcpy(newlst->content, content, content_size);
		newlst->content_size = content_size;
	}
	newlst->next = NULL;
	return (newlst);
}
