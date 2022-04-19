/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 23:39:09 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/18 02:52:21 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_to_move_first(int *temp, int size)
{
	int	i;
	int	s;

	i = 0;
	s = ft_smallest(temp, size);
	while (temp[i] != s)
		i++;
	return (i);
}

void	ft_place_b(t_stack a, t_stack b)
{
	int	*temp;
	int	i;
	int	j;
	int	s;
	int	n;

	i = 0;
	while (i < *b.size - 1)
	{
		temp = ft_val_moves(a.arr, b.arr, *a.size, *b.size);
		s = ft_to_move_first(temp, *a.size);
		j = -1;
		n = b.arr[s];
		if (s > *b.size / 2 && ft_pos_a(a.arr, *a.size, n) > *a.size / 2)
		{
			while (j++ < *a.size - ft_pos_a(a.arr, *a.size, n) && j < *b.size - s)
				ft_rrr(a.arr, b.arr, *a.size, *b.size);
			while (b.arr[0] != n)
				ft_rrb(b.arr, *b.size, 0);
			ft_pb(a.arr, b.arr, a.size, b.size);
			n = a.arr[0];
			while (ft_pos_a(a.arr, *a.size, n) > 0)
				ft_rra(a.arr, *a.size, 0);
		}
	}
}

void	ft_sort(t_stack a)
{
	t_stack b;
	int	*lis;
	int	i;

	printf("value of a.size : %d\n", *a.size);
	if (*a.size == 2)
		ft_sa(a.arr, 0);
	else if (*a.size == 3)
		ft_sort_three(a.arr, *a.size);
	else
	{
		lis = ft_lis(a.arr, *a.size);
		printf("test : %d\n", ft_size_lis(a.arr, *a.size));
		b = ft_push_lis(a, lis, ft_size_lis(a.arr, *a.size));
		i = 0;
		printf("\n b :");
		while (i < b.size[0] - 1)
		{
			printf("%d ", b.arr[i]);
			i++;
		}
		free(b.arr);
		free(b.size);
	}
}
