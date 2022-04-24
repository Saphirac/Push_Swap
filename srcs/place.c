/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:00:25 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/24 15:07:35 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_place_same_n(t_stack a, t_stack b, int *save)
{
	int	i;
	int	j;

	i = save[0] - 1;
	j = save[1] - 1;
	while (++i < 0 && ++j < 0)
		ft_rrr(a.arr, b.arr, *a.size, *b.size);
	while (++i < 0)
		ft_rra(a.arr, *a.size, 0);
	while (++j < 0)
		ft_rrb(b.arr, *b.size, 0);	
}

void	ft_place_same_p(t_stack a, t_stack b, int *save)
{
	int	i;
	int	j;

	i = save[0] + 1;
	j = save[1] + 1;
	while (--i > 0 && --j > 0)
		ft_rr(a.arr, b.arr, *a.size, *b.size);
	while (--i > 0)
		ft_ra(a.arr, *a.size, 0);
	while (--j > 0)
		ft_rb(b.arr, *b.size, 0);	
}

void	ft_place_diff_ab(t_stack a, t_stack b, int *save)
{
	int	i;
	int	j;

	i = save[0] + 1;
	j = save[1] - 1;
	while (--i > 0)
		ft_ra(a.arr, *a.size, 0);
	while (++j < 0)
		ft_rrb(b.arr, *b.size, 0);
}

void	ft_place_diff_ba(t_stack a, t_stack b, int *save)
{
	int	i;
	int	j;

	i = save[0] - 1;
	j = save[1] + 1;
	while (++i < 0)
		ft_rra(a.arr, *a.size, 0);
	while (--j > 0)
		ft_rb(b.arr, *b.size, 0);
}

void	ft_place_b(t_stack a, t_stack b, int *save, int n)
{
	if (save[0] < 0 && save[1] < 0)
		ft_place_same_n(a, b, save);
	else if (save[0] >= 0 && save[1] >= 0)
		ft_place_same_p(a, b, save);
	else if (save[0] >= 0 && save[1] < 0)
		ft_place_diff_ab(a, b, save);
	else if (save[0] < 0 && save[1] >= 0)
		ft_place_diff_ba(a, b, save);
	if (b.arr[0] == n && ft_pos_a(a.arr, *a.size, n) == 0)
		ft_pa(b.arr, a.arr, b.size, a.size);
}
