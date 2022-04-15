/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:23:59 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/08 02:30:28 by mcourtoi         ###   ########.fr       */
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

void	ft_test(t_stack a, t_stack b)
{
	ft_pb(a.arr, b.arr, a.size, b.size);
}

int	main(int ac, char **av)
{
	t_stack	tosort;
	int	i;

	tosort.arr = ft_parse(ac, av);
	tosort.size = ft_calloc(1);
	if (!tosort.arr)
		return (1);
	*tosort.size = ft_size(ac, av);
	if (ft_check(tosort.arr, *tosort.size) == 1)
		return (1);
	ft_sort(tosort);
	printf("test : %d\n", *tosort.size);
	i = 0;
	while (i < *tosort.size)
	{
		printf("%d ", tosort.arr[i]);
		i++;
	}
	free(tosort.arr);
	return (0);
}
