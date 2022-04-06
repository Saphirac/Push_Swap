/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 00:04:02 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/06 00:38:39 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(int *tosort, int size)
{
	if (tosort[0] > tosort[1] && tosort[0] < tosort[2])
		ft_sa(tosort, 0);
	else if (tosort[0] > tosort[1] && tosort[1] > tosort[2])
	{
		ft_sa(tosort, 0);
		write(1, "\n", 1);
		ft_rra(tosort, size, 0);
	}
	else if (tosort[0] > tosort[1] && tosort[0] > tosort[2])
		ft_ra(tosort, size, 0);
	else if (tosort[0] < tosort[1] && tosort[0] < tosort[2])
	{
		ft_sa(tosort, 0);
		write(1, "\n", 1);
		ft_ra(tosort, size, 0);
	}
	else if (tosort [0] < tosort[1] && tosort[0] > tosort[2])
		ft_rra(tosort, size, 0);
}

int	ft_is_lis(int *lis, int sizelis, int n)
{
	int	i;

	i = 0;
	while (i < sizelis)
	{
		if (lis[i] == n)
			return (TRUE);
		i++;
	}
	return (FALSE);
}

int	*ft_push_lis(int *tosort, int *lis, int size, int sizelis)
{
	int	*b;
	int	sizeb;
	int	i;
	int	j;
	
	sizeb = size - sizelis;
	b = malloc(sizeof(int) * sizeb);
	i = 0;
	while (i < size - 1)
	{
		j = tosort[i];
		if (ft_is_lis(lis, sizelis, j) == FALSE)
		{
			while (tosort[0] != j)
				ft_smart_rotate(tosort, size, i);
			ft_pb(tosort, b, &size, &sizeb);
		}
		i++;
	}
	free(lis);
	return (b);
}

int	ft_pos_a(int *tosort, int size, int n)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	if (n > tosort[size - 1] && n < tosort[i])
		pos = 1;
	while (i < size - 2)
	{
		if (n > tosort[i] && n < tosort[i + 1] && i <= size / 2)
			pos = i + 1;
		if (n > tosort[i] && n < tosort[i + 1] && i > size / 2)
			pos = -((size - i) + 1);
		i++;
	}
	if (pos == 0)
		pos = ft_pos_small_big(tosort, size, n);
	return (pos);
	
}

int	ft_pos_small_big(int *tosort, int size, int n)
{
	int	pos;
	int i;

	i = 0;
	pos = n;
	if (pos < ft_smallest(tosort, size))
	{
		while (tosort[i] != ft_smallest(tosort, size))
			i++;
		pos = i;
	}
	if (pos > ft_biggest(tosort, size))
	{
		while (tosort[i] != ft_biggest(tosort, size))
			i++;
		if (i == size - 1)
			return (1);
		pos = i + 1;
	}
	if (pos > size / 2)
		return (-(size - pos + 1));
	return (pos);
}

int	*ft_val_moves(int *tosort, int *b, int size, int sizeb)
{
	int	*temp;
	int	i;
	int j;

	temp = malloc(sizeof(int) * sizeb);
	i = 0;
	while (i < sizeb - 1)
	{
		j = ft_pos_a(tosort, size, b[i]);
		if (j >= 0)
			temp[i] = j + i;
		if (j < 0 && i <= sizeb / 2)
			temp[i] = -j + i;
		if (j < 0 && i > sizeb / 2)
			temp[i] = -j + (sizeb - i + 1);
		i++;
	}
	return (temp);
}

void	ft_smart_rotate(int	*tosort, int size, int i)
{
	if (i <= size / 2)
		ft_ra(tosort, size, 0);
	else
		ft_rra(tosort, size, 0);
}