/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:52:18 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/04 00:58:29 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pb(int *la, int *lb, int *sizea, int *sizeb)
{
	if (la)
	{
		*sizeb = *sizeb + 1;
		ft_rrb(lb, *sizeb, 1);
		lb[0] = la[0];
		ft_ra(la, *sizea, 1);
		*sizea = *sizea - 1;
		la[*sizea] = 0;
		return (write(1, "pa", 2));
	}
	return (1);
}

int	ft_pa(int *lb, int *la, int *sizeb, int *sizea)
{
	if (lb)
	{
		*sizea = *sizea + 1;
		ft_rra(la, *sizea, 1);
		la[0] = lb[0];
		ft_rb(lb, *sizeb, 1);
		*sizeb = *sizeb - 1;
		lb[*sizeb] = 0;
		return (write(1, "pb", 2));
	}
	return (1);
}
