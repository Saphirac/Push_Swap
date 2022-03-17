
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:21:16 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/14 18:14:48 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check(t_list *li)
{
	t_list	*temp;
	
	temp = li->next;
	while (li)
	{
		while (temp)
		{
			if (li->value == temp->value)
				return (1);
			temp = temp->next;
		}
		li = li->next;
		temp = li->next;
	}
	return (0);
}

t_list	**ft_parse_one(t_list **test, char *tab)
{
	char	**split;
	int	j;

	split = ft_split(tab, ' ');
	j = 0;
	while (split[j])
	{
		ft_lstadd_back(test, ft_lstnew(ft_atoi(split[j]), j));
		j++;
	}
	return (test);
}