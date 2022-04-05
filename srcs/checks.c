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

int	ft_check_sorted(int *i, int size)
{
	int	j;

	j = 0;
	while (j < size - 1)
	{
		if (i[j] > i[j + 1])
			return (1);
		j++;
	}
	return (0);
}

int	ft_check_digits(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == FALSE && str[i] != '-')
			return (1);
		i++;
	}
	if (str[0] == '-')
		i--;
	if (!ft_strncmp(str, "-2147483649", 11)
		|| !ft_strncmp(str, "2147483648", 10))
		return (1);
	if (i >= 11)
		return (1);
	return (0);
}

int	ft_check_double(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 2)
	{
		j = i + 1;
		while (j < size - 1)
		{
			if (tab[i] == tab[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check(int *tosort, int size)
{
	if (ft_check_double(tosort, size) == 1)
	{
		free(tosort);
		write(1, "Error\n", 6);
		return (1);
	}
	if (ft_check_sorted(tosort, size) == TRUE || size == 1)
	{
		free(tosort);
		return (1);
	}
	return (0);
}
