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

void	ft_ra(int *la, int size, int c)
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
		write(1, "ra\n", 3);
}

void	ft_rb(int *lb, int size, int c)
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
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack a, t_stack b, int c)
{
	ft_ra(a.arr, *a.size, 1);
	ft_rb(b.arr, *b.size, 1);
	if (c == 0)
		write(1, "rr\n", 3);
}
