/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 00:04:02 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/02 22:01:10 by mcourtoi         ###   ########.fr       */
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

void	ft_smart_rotate(int *tosort, int size, int i)
{
	if ()	
}