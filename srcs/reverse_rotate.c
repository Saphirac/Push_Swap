/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:45:11 by marvin            #+#    #+#             */
/*   Updated: 2022/03/17 20:45:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_rra(int *la, int size, int c)
{
    int swap;

    while (size-- > 0)
    {
        swap = la[size];
        la[size] = la[size - 1];
        la[size - 1] = swap;
    }
    if (c == 0)
        return (write(1, "rra", 3));
    return (1);
}

int ft_rrb(int *lb, int size, int c)
{
    int  swap;

    while (size-- > 0)
    {
        swap = lb[size];
        lb[size] = lb[size - 1];
        lb[size - 1] = swap;
    }
    if (c == 0)
        return (write(1, "rrb", 3));
    return (1);
}

int ft_rrr(int *la, int *lb, int size)
{
    ft_rra(la, size, 1);
    ft_rrb(lb, size, 1);
    return (write(1, "rrr", 3));
}