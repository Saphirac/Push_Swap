/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:52:18 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/20 03:36:58 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(int *la, int *lb, int *sizea, int *sizeb)
{
	if (la)
	{
		lb[*sizeb] = 0;
		*sizeb = *sizeb + 1;
		ft_rrb(lb, *sizeb, 1);
		lb[0] = la[0];
		ft_ra(la, *sizea, 1);
		*sizea = *sizea - 1;
		la[*sizea] = 0;
		write(1, "pb\n", 3);
	}
}

void	ft_pa(int *lb, int *la, int *sizeb, int *sizea)
{
	if (lb)
	{
		*sizea = *sizea + 1;
		ft_rra(la, *sizea, 1);
		la[0] = lb[0];
		ft_rb(lb, *sizeb, 1);
		*sizeb = *sizeb - 1;
		lb[*sizeb] = 0;
		write(1, "pa\n", 3);
	}
}
