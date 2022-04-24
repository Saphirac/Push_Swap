/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 23:39:09 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/24 15:12:52 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_best_move(t_stack a, t_stack b)
{
	int	temp[2];
	int	save[2];
	int	i;
	int	n;

	i = 0;
	save[0] = 10000;
	save[1] = 10000;
	while (i < *b.size)
	{
		temp[0] = ft_pos_a(a.arr, *a.size, b.arr[i]);
		if (i <= *b.size / 2)
			temp[1] = i;
		if (i > *b.size / 2)
			temp[1] = -(*b.size - i + 1);
		if (ft_abs(temp[0]) + ft_abs(temp[1]) < ft_abs(save[0]) + ft_abs(save[1]))
		{
			save[0] = temp[0];
			save[1] = temp[1];
			n = b.arr[i];
		}
		i++;
	}
	ft_place_b(a, b, save, n);
}

void	ft_sort(t_stack a)
{
	t_stack b;
	int	*lis;

	if (*a.size == 2)
		ft_sa(a.arr, 0);
	else if (*a.size == 3)
		ft_sort_three(a.arr, *a.size);
	else
	{
		lis = ft_lis(a.arr, *a.size);
		b = ft_push_lis(a, lis, ft_size_lis(a.arr, *a.size));
		while (*b.size > 0)
			ft_best_move(a, b);
		free(b.arr);
		free(b.size);
	}
}
