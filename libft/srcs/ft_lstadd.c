/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorjen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:56:25 by anorjen           #+#    #+#             */
/*   Updated: 2018/11/26 12:56:25 by anorjen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && *alst && new)
	{
		new->next = (*alst);
		(*alst) = new;
	}
	if (!*alst && new)
	{
		new->next = NULL;
		(*alst) = new;
	}
}
