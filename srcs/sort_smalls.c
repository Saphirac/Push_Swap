/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_smalls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:45:51 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/25 17:46:15 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_three(int *a, int size)
{
	if (ft_check_sorted(a, size) == FALSE)
		return (1);
	else if (a[0] > a[1] && a[0] < a[2])
		ft_sa(a, 0);
	else if (a[0] > a[1] && a[1] > a[2])
	{
		ft_sa(a, 0);
		ft_rra(a, size, 0);
	}
	else if (a[0] > a[1] && a[0] > a[2])
		ft_ra(a, size, 0);
	else if (a[0] < a[1] && a[0] < a[2])
	{
		ft_sa(a, 0);
		ft_ra(a, size, 0);
	}
	else if (a [0] < a[1] && a[0] > a[2])
		ft_rra(a, size, 0);
	return (0);
}
