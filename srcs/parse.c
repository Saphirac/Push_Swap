
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                     	    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:21:16 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/14 18:14:48 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**ft_parse_one(t_list **test, char *tab)
{
	char	**split;
	t_list	*head;
	int	j;

	split = ft_split(tab, ' ');
	j = 0;
	while (split[j])
	{
		if (ft_check_digits(split[j]) == TRUE)
			break;
		ft_lstadd_back(test, ft_lstnew(ft_atoi(split[j]), j));
		j++;
	}
	head = *test;
	free(split);
	if (ft_check(head) == 1 || ft_lstsize(head) == 1 
			|| ft_check_digits(split[j]) == TRUE)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	//ft_free(head);
	return (test);
}

t_list	**ft_parse_two(t_list **test, char **tab)
{
	t_list	*head;
	int	j;

	j = 0;
	while(tab[j])
	{
		if (ft_check_digits(tab[j]) == TRUE)
			break;
		ft_lstadd_back(test, ft_lstnew(ft_atoi(tab[j]), j));
		j++;
	}
	head = *test;
	if (ft_check(head) == 1 || ft_lstsize(head) == 1 
			|| ft_check_digits(tab[j]) == TRUE)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	return (test);
}