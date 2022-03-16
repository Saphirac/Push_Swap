/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 02:23:25 by mcourtoi          #+#    #+#             */
/*   Updated: 2021/12/11 02:46:08 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int value, int index)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (!(newlist))
		return (NULL);
	newlist->value = value;
	newlist->index = index;
	newlist->next = NULL;
	return (newlist);
}
