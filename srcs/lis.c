/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:52:04 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/19 21:03:16 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_fill_k(int *a, int size)
{
	int	*k;
	int	i;
	int	j;

	k = ft_calloc(size);
    i = -1;
    while (++i < size)
        k[i] = 1;
	
    i = 1;
	while (i < size)
	{
		j = -1;
		while (++j < i)
			if (a[i] > a[j])
				if (k[j] + 1 > k[i])
					k[i] = k[j] + 1;
		printf("k : %d\n", k[i]);
        i++;
	}
	return (k);
}

int	ft_size_lis(int *a, int size)
{
	int	*k;
	int	n;

	k = ft_fill_k(a, size);
	n = ft_biggest(k, size);
	free(k);
	return (n);
}

int	*ft_lis(int *a, int size)
{
	int	*lis;
	int	*k;
	int	i;
	int	j;

	k = ft_fill_k(a, size);
	j = ft_biggest(k, size);
	lis = ft_calloc(j);
	i = size;
	while (--i > 1)
	{
		printf("value of i of lis : %d\n", i);
		if (k[i] == j)
		{
			lis[j - 1] = a[i];
            printf("lis : %d\n", lis[j - 1]);
			j--;
		}
	}
	free(k);
	return (lis);
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

int	ft_check_lis(t_stack a, int *lis, int sizelis)
{
	int	i;
	
	i = 0;
	while (i < *a.size - 1)
	{
		if (ft_is_lis(lis, sizelis, a.arr[i]) == FALSE)
			return (FALSE);
		i++;
	}
	return (TRUE);
}
