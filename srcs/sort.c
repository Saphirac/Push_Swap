/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 23:39:09 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/05 16:43:34 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_fill_k(int *tosort, int size)
{
	int	*k;
	int	i;
	int	j;

	k = malloc(sizeof(int) * size);
	i = -1;
	while (i++ < size - 1)
		k[i] = 1;
	i = 0;
	while (i++ < size - 1)
	{
		j = -1;
		while (j++ < i - 1)
			if (tosort[i] > tosort[j])
				if (k[j] + 1 > k[i])
					k[i] = k[j] + 1;
	}
	return (k);
}

int	ft_size_lis(int *tosort, int size)
{
	int	*k;
	int	n;

	k = ft_fill_k(tosort, size);
	n = ft_biggest(k, size);
	free(k);
	return (n);
}

int	*ft_lis(int *tosort, int size)
{
	int	*lis;
	int	*k;
	int	sizek;
	int	i;
	int	j;

	k = ft_fill_k(tosort, size);
	sizek = ft_biggest(k, size);
	lis = malloc(sizeof(int) * sizek);
	i = -1;
	j = 1;
	while (i++ < size)
	{
		if (k[i] == j)
		{
			lis[j - 1] = tosort[i];
			j++;
		}
	}
	free(k);
	return (lis);
}

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

void	ft_place_b(int *tosort, int *b, int size, int sizeb)
{
	int	*temp;
	int	i;
	int	s;

	i = 0;
	while (i < sizeb - 1)
	{
		temp = ft_val_moves(tosort, b, size, sizeb);
		s = ft_to_move_first(temp, size);
		while (b[i] != temp[s])
		
		
		
	}
	
}

void	ft_sort(int *tosort, int size)
{
	int  *b;
	int sizeb;
	int	*lis;

	lis = ft_lis(tosort, size);
	b = ft_push_lis(tosort, lis, size, ft_size_lis(tosort, size));
	free(lis);
	sizeb = size - ft_size_lis(tosort, size) + 1;
	if (size == 2)
		ft_sa(tosort, 0);
	else if (size == 3)
		ft_sort_three(tosort, size);
	else
		
}
