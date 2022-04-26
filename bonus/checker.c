/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:43:51 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/26 05:13:01 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

static void	ft_do_moves(t_stack a, t_stack b, char *move)
{
	if (move[0] == 'r' && move[2] != '\0')
		ft_cmp_rrotate(a, b, move);
	else if (move[0] == 'r' && !move[2])
		ft_cmp_rotate(a, b, move);
	else if (move[0] == 'p')
		ft_cmp_push(a, b, move);
	else if (move[0] == 's')
		ft_cmp_swap(a, b, move);
	else
        write(1, "Error\n", 6);
}

int ft_moves(t_stack a)
{
    char    *move;
    t_stack b;
    
    b.arr = ft_calloc(*a.size);
    b.size = ft_calloc(1);
	*b.size = 0;
    move = get_next_line(1);
    while (move)
    {
        ft_do_moves(a, b, move);
        move = get_next_line(1);
    }
    if (ft_check_sorted(a.arr, *a.size) == TRUE && b.size == 0)
    {
        write(1, "OK\n", 3);
        return (TRUE);
    }
    else
    {
        write(1, "KO\n", 3);
        return (FALSE);
    }
}

int main(int ac, char **av)
{
    t_stack a;

    a.arr = ft_parse(ac, av);
	if (!a.arr)
    {
		write(1, "Error\n", 6);
		return (1);
    }
	a.size = ft_calloc(1);
	*a.size = ft_size(ac, av);
	if (ft_check(a.arr, *a.size) == 1)
	{
		write(1, "Error\n", 6);
        return (1);
    }
    if (ft_moves(a) == TRUE)
        return (0);
    else
        return (1);
}