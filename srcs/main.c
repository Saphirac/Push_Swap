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
	t_list	*test;
	int	i;

	i = 0;
	/*argv = malloc(sizeof(char *) * ac);
	while (av[i++])
		argv[i] = av[i];*/
	test = ft_parse_one(av[1]);
	if (!test)
		return (1);
	printf("check : %d\n", ft_check(test));
	while (test)
	{
		printf("%d ", test->value);
		test = test->next;
	}
	return (0);
}