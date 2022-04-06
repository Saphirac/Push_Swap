/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:55:17 by marvin            #+#    #+#             */
/*   Updated: 2022/03/17 19:55:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ra(int *la, int size, int c)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		swap = la[i];
		la[i] = la[i + 1];
		la[i + 1] = swap;
		i++;
	}
	if (c == 0)
		return (write(1, "ra\n", 3));
	return (1);
}

int	ft_rb(int *lb, int size, int c)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		swap = lb[i];
		lb[i] = lb[i + 1];
		lb[i + 1] = swap;
		i++;
	}
	if (c == 0)
		return (write(1, "rb\n", 3));
	return (1);
}

int	ft_rr(int *la, int *lb, int size, int sizeb)
{
	ft_ra(la, size, 1);
	ft_rb(lb, sizeb, 1);
	return (write(1, "rr\n", 3));
}
