/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 23:39:09 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/23 15:31:07 by mcourtoi         ###   ########.fr       */
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

/*void	ft_place_b(t_stack a, t_stack b)
{
	
}*/

void	ft_sort(t_stack a)
{
	t_stack b;
	int	*lis;
	int	*tmp;
	int	i;

	if (*a.size == 2)
		ft_sa(a.arr, 0);
	else if (*a.size == 3)
		ft_sort_three(a.arr, *a.size);
	else
	{
		lis = ft_lis(a.arr, *a.size);
		b = ft_push_lis(a, lis, ft_size_lis(a.arr, *a.size));
		i = 0;
		tmp = ft_val_moves(a.arr, b.arr, *a.size, *b.size);
		while (i < b.size[0])
		{
			printf("b : %d\n", b.arr[i]);
			printf("tmp : %d\n", tmp[i]);
			i++;
		}
		printf("\n");

		free(b.arr);
		free(b.size);
	}
}
