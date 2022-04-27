/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 03:35:24 by marvin            #+#    #+#             */
/*   Updated: 2022/03/17 03:35:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char *stack)
{
	int	i;

	i = -1;
	while (stack[i + 1] == '-' || stack[i + 1] == '+')
		i++;
	while (stack[++i])
		if (!(stack[i] >= '0' && stack[i] <= '9'))
			return (0);
	if (i >= 10 && (ft_atoi(stack) > 2147483647
			|| ft_atoi(stack) < -2147483648))
		return (0);
	return (1);
}

int	ft_check_sorted(int *i, int size)
{
	int	j;

	j = 0;
	while (j < size - 1)
	{
		if (i[j] > i[j + 1])
			return (FALSE);
		j++;
	}
	return (TRUE);
}

int	ft_check_double(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check(t_stack tosort)
{
	if (ft_check_double(tosort.arr, *tosort.size) == 1)
	{
		free(tosort.arr);
		free(tosort.size);
		write(1, "Error\n", 6);
		return (1);
	}
	if (ft_check_sorted(tosort.arr, *tosort.size) == TRUE || *tosort.size == 1)
	{
		free(tosort.arr);
		free(tosort.size);
		return (1);
	}
	return (0);
}
