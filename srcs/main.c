/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:23:59 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/17 04:48:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**argv;
	t_list	**tosort = NULL;
	t_list	*head;
	int	i;

	
	i = 1;
	tosort = malloc(sizeof(t_list *));
	if (ac <= 2)
		tosort = ft_parse_one(tosort, "9 6 7");
	if (ac > 2)
	{
		argv = malloc(sizeof(char *) * ac + 1);
		while (av[i])
		{
			argv[i - 1] = ft_strdup(av[i]);
			i++;
		}
		argv[i - 1] = 0;
		tosort = ft_parse_two(tosort, argv);
	}
	if (!tosort)
		return (1);
	head = *tosort;
	while (head)
	{
		printf("%d ", head->value);
		head = head->next;
	}
	return (0);
}