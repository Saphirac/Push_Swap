/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:23:59 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/27 20:23:13 by mcourtoi         ###   ########.fr       */
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
			argv[i - 1] = ft_strndup(av[i], 0);
		argv[i - 1] = 0;
		tosort = ft_parse_two(tosort, argv);
		ft_free(argv);
	}
	else
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	return (tosort);
}

int	*ft_fill_tab(t_list *temp)
{
	int	*tosort;
	int	i;

	tosort = malloc(sizeof(int) * (ft_lstsize(temp) + 1));
	i = 0;
	while (temp)
	{
		tosort[i] = temp->value;
		temp = temp->next;
		i++;
	}
	return (tosort);
}

int	main(int ac, char **av)
{
	t_list	*temp;
	int	*tosort;
	int	i;
	
	temp = NULL;
	i = 0;
	ft_parse(&temp, ac, av);
	if (!temp)
		return (1);
	if (ft_check_sorted(temp) == FALSE || ft_lstsize(temp) == 1)
		return (1);
	tosort = ft_fill_tab(temp);
	ft_sa(tosort, 0);
	printf("\n");
	while (i < ft_lstsize(temp))
	{
		printf("%d ", tosort[i]);
		i++;
	}
	ft_lstclear(&temp);
	return (0);
}