/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:40:19 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/02 04:38:48 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sa(int *la, int c)
{
	int	swap;

	swap = la[0];
	la[0] = la[1];
	la[1] = swap;
	if (c == 0)
		return (write(1, "sa", 2));
	return (1);
}

int	ft_sb(int *lb, int c)
{
	int	swap;

	swap = lb[0];
	lb[0] = lb[1];
	lb[1] = swap;
	if (c == 0)
		return (write(1, "sb", 2));
	return (1);
}

int	ft_ss(int *la, int *lb)
{
	ft_sa(la, 1);
	ft_sb(lb, 1);
	return (write(1, "ss", 2));
}
