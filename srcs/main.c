/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:23:59 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/19 01:24:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	**ft_parse(t_list **tosort, int ac, char **av)
{
	int	i;
	char	**argv;

	if (ac == 2)
		tosort = ft_parse_one(tosort, av[1]);
	else if (ac > 2)
	{
		argv = malloc(sizeof(char *) * ac);
		i = 0;
		while (av[++i])
			argv[i - 1] = ft_strdup(av[i]);
		argv[i - 1] = 0;
		tosort = ft_parse_two(tosort, argv);
	}
	else
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	return (tosort);
}

int	main(int ac, char **av)
{
	t_list	*tosort;
	t_list	*head;
	
	tosort = NULL;
	ft_parse(&tosort, ac, av);
	if (!tosort)
		return (1);
	head = tosort;
	if (ft_check_sorted(head) == FALSE || ft_lstsize(head) == 1)
		return (1);
	while (head)
	{
		printf("%d ", head->value);
		head = head->next;
	}
	return (0);
}