/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:23:59 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/14 19:28:22 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	//char	**argv;

	(void)ac;
	(void)av;
	t_list	**test = NULL;
	t_list	*head;
	int	i;

	/*argv = malloc(sizeof(char *) * ac);
	while (av[i++])
		argv[i] = av[i];*/
	i = 0;
	test = ft_parse_one(test, "1 2 3");
	if (!test)
		return (1);
	head = *test;
	//printf("check : %d\n", ft_check(test));
	while (head)
	{
		printf("%d ", head->value);
		head = head->next;
		i++;
	}
	return (0);
}