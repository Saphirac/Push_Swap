/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:23:59 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/17 21:37:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*static t_list	**ft_parse(t_list **tosort, int ac, char **av)
{
	int	i;
	char	**argv;

	if (ac == 2)
		tosort = ft_parse_one(tosort, av[1]);
	else if (ac > 2)
	{
		argv = malloc(sizeof(char *) * ac);
		i = -1;
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
}*/

int	main(int ac, char **av)
{
	t_list	**tosort = NULL;
	t_list	**test = NULL;
	t_list	*head;
	t_list	*afftest;
	(void)ac;
	
	tosort = malloc(sizeof(t_list *));
	test = malloc(sizeof(t_list *));
	
	tosort = ft_parse_one(tosort, av[1]);
	test = ft_parse_one(test, av[2]);
	if (!tosort)
		return (1);
	ft_pa(tosort, test);
	head = *tosort;
	//if (ft_check_sorted(head) == FALSE || ft_lstsize(head) == 1)
	//	return (1);
	write(1, "\n", 1);
	while (head)
	{
		printf("%d ", head->value);
		head = head->next;
	}
	afftest = *test;
	write(1, "\n", 1);
	while (afftest)
	{
		printf("%d ", afftest->value);
		afftest = afftest->next;
	}
	return (0);
}