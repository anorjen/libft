/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:56:25 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/26 12:56:25 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstaddnext(t_list *lst)
{
	t_list	*llst;
	t_list	*newelem;

	llst = lst;
	while (llst->next)
	{
		llst = llst->next;
	}
	newelem = (t_list *)malloc(sizeof(t_list));
	if (newelem == NULL)
		return ;
	newelem->next = NULL;
	llst->next = newelem;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*res;
	t_list	*llst;

	if (lst == NULL)
		return (NULL);
	llst = lst;
	newlst = (t_list *)malloc(sizeof(t_list));
	newlst->next = NULL;
	if (newlst == NULL)
		return (NULL);
	res = newlst;
	while (llst != NULL && newlst != NULL)
	{
		newlst->content_size = f(llst)->content_size;
		newlst->content = malloc(newlst->content_size);
		ft_memcpy(newlst->content, f(llst)->content, newlst->content_size);
		llst = llst->next;
		ft_lstaddnext(newlst);
		newlst = newlst->next;
	}
	return (res);
}
