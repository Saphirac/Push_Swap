
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

t_list	*ft_parse_one(char *tab)
{
	t_list	*test;
	char	**split;
	int	j;

	split = ft_split(tab, ' ');
	test = ft_lstnew(0, 0);
	j = 0;
	while (split[j])
	{
		test->value = ft_atoi(split[j]);
		test = test->next;
		j++;
	}
	printf("testlen : %d\n", ft_lstsize(test));
	if (ft_lstsize(test) != j || ft_lstsize(test) == 1 || ft_check(test) == 1)
		return (NULL);
	return (test);
}