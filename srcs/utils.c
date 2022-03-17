/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:24:07 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/17 18:05:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putstr(char *s)
{
	return(write(1, s, ft_strlen(s)));
}

int	ft_numlen(int *n)
{
	int	i;

	i = 0;
	if (n[i] == 0)
		i++;
	while (n[i])
		i++;
	return (i);
}

void	ft_free(t_list *li)
{
	t_list	*tmp;

	while (li)
	{
		tmp = li->next;
		free(li);
		li = tmp;
	}
}
