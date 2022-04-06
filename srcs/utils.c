/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:24:07 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/06 15:26:22 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_strrlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_calloc(int size)
{
	int	*ret;
	int	i;
	
	ret = malloc(sizeof(int) * size);
	i = 0;
	while (i < size - 1)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}

int	ft_smallest(int *tab, int size)
{
	int	n;
	int	i;

	i = 0;
	n = tab[0];
	while (i < size - 2)
	{
		if (tab[i + 1] < tab[i] && tab[i + 1] < n)
			n = tab[i + 1];
		i++;
	}
	return (n);
}

int	ft_biggest(int *tab, int size)
{
	int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < size - 2)
	{
		if (tab[i + 1] > tab[i] && tab[i + 1] > max)
			max = tab[i + 1];
		i++;
	}
	return (max);
}