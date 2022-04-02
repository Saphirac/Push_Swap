/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 23:39:09 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/02 21:52:49 by mcourtoi         ###   ########.fr       */
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

int	ft_size_lis(int *k, int size)
{
	int	i;
	int	max;

	i = 0;
	max = 1;
	while (i < size - 2)
	{
		if (k[i + 1] > k[i])
			max = k[i + 1];
		i++;
	}
	return (max);
}

int	*ft_lis(int *tosort, int size)
{
	int	*lis;
	int	*k;
	int	sizek;
	int	i;
	int	j;

	k = ft_fill_k(tosort, size);
	sizek = ft_size_lis(k, size);
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

void	ft_sort(int *tosort, int size)
{
	/*int  *b;
	int sizeb;

	b = malloc(sizeof(int) * size);
	sizeb = 0;*/
	if (size == 2)
		ft_sa(tosort, 0);
	else if (size == 3)
		ft_sort_three(tosort, size);
}
