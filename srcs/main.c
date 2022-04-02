/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:23:59 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/02 04:47:55 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_parse(int ac, char **av)
{
	int	*tosort;

	if (ac == 2)
		tosort = ft_parse_one(av[1]);
	else if (ac > 2)
		tosort = ft_parse_two(av + 1, ac);
	else
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	return (tosort);
}

static int	ft_size(int ac, char **av)
{
	int		size;
	char	**temp;

	if (ac == 2)
	{
		temp = ft_split(av[1], ' ');
		size = ft_strrlen(temp);
		ft_free(temp);
	}
	else if (ac > 2)
		size = ac - 1;
	return (size);
}

int	main(int ac, char **av)
{
	int	*tosort;
	int	size;
	int	i;

	tosort = ft_parse(ac, av);
	if (!tosort)
		return (1);
	size = ft_size(ac, av);
	printf("size : %d\n", size);
	if (ft_check(tosort, size) == 1)
		return (1);
	ft_sort(tosort, size);
	printf("\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", tosort[i]);
		i++;
	}
	free(tosort);
	return (0);
}
