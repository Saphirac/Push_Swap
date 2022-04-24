/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 00:04:02 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/24 15:02:55 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_three(int *a, int size)
{
	if (ft_check_sorted(a, size) == FALSE)
		return (1);
	else if (a[0] > a[1] && a[0] < a[2])
		ft_sa(a, 0);
	else if (a[0] > a[1] && a[1] > a[2])
	{
		ft_sa(a, 0);
		ft_rra(a, size, 0);
	}
	else if (a[0] > a[1] && a[0] > a[2])
		ft_ra(a, size, 0);
	else if (a[0] < a[1] && a[0] < a[2])
	{
		ft_sa(a, 0);
		ft_ra(a, size, 0);
	}
	else if (a [0] < a[1] && a[0] > a[2])
		ft_rra(a, size, 0);
	return (0);
}

void	ft_smart_rotate(int	*a, int size, int i)
{
	if (i <= size / 2)
		ft_ra(a, size, 0);
	else
		ft_rra(a, size, 0);
}

t_stack	ft_push_lis(t_stack a, int *lis, int sizelis)
{
	t_stack b;
	int	i;
	int	j;
	
	b.size = ft_calloc(1);
	b.size[0] = 0;
	b.arr = ft_calloc(b.size[0]);
	while (ft_check_lis(a, lis, sizelis) == FALSE)
	{
		i = -1;
		while (++i < *a.size - 1)
		{
			j = a.arr[i];			
			if (ft_is_lis(lis, sizelis, j) == FALSE)
			{
				while (a.arr[0] != j)
					ft_smart_rotate(a.arr, a.size[0], i);
				ft_pb(a.arr, b.arr, a.size, b.size);
			}
		}
	}
	free(lis);
	return (b);
}

int	ft_pos_big(int *a, int size, int n)
{
	int i;

	i = 0;
	if (n > ft_biggest(a, size))
	{
		while (a[i] != ft_biggest(a, size))
			i++;
		if (i == size - 1)
			return (1);
		i++;
	}
	if (i > size / 2)
		return (-(size - i + 1));
	return (i);
}

int	ft_pos_a(int *a, int size, int n)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	if (n > a[size - 1] && n < a[i])
		return (0);
	while (i < size)
	{
		if (n > a[i] && n < a[i + 1] && i <= size / 2)
			pos = i + 1;
		if (n > a[i] && n < a[i + 1] && i > size / 2)
			pos = -((size - i) + 1);
		i++;
	}
	if (pos == 0)
		pos = ft_pos_big(a, size, n);
	return (pos);
	
}
