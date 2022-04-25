/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 00:04:02 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/25 17:34:58 by mcourtoi         ###   ########.fr       */
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

void	ft_ruf(t_stack a, int i, int n)
{
	while (a.arr[0] != n)
		ft_smart_rotate(a.arr, *a.size, i);
}

t_stack	ft_push_lis(t_stack a, int *lis, int sizelis)
{
	t_stack b;
	int	i;
	int	j;
	int	sizecpy;
	
	b.size = ft_calloc(1);
	b.size[0] = 0;
	b.arr = ft_calloc(*a.size);
	sizecpy = *a.size;
	j = 0;
	i = -1;
	while (++i < *a.size && j < sizecpy - sizelis + 1)
	{		
		if (ft_is_lis(lis, sizelis, a.arr[i]) == FALSE)
		{
			ft_ruf(a, i, a.arr[i]);
			ft_pb(a.arr, b.arr, a.size, b.size);
			j++;
			i = -1;
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
	}
	if (i > size / 2)
		return (-(size - i - 1));
	return (i + 1);
}

int	ft_pos_a(int *a, int size, int n)
{
	int	i;

	i = 0;
	if (n > a[size - 1] && n < a[0])
		return (0);
	while (i < size)
	{
		if (n > a[i] && n < a[i + 1] && i <= size / 2)
			return (i + 1);
		else if (n > a[i] && n < a[i + 1] && i > size / 2)
			return (-(size - i - 1));
		i++;
	}
	return (ft_pos_big(a, size, n));
}
