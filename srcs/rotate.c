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

int ft_ra(t_list *la, int c)
{
    int swap;

    while (la)
    {
        swap = la->value;
        la->value = la->next->value;
        la->next->value = swap;
        la = la->next;
    }
    if (c == 0)
        return (write(1, "ra", 2));
    return (1);
}

int ft_rb(t_list *lb, int c)
{
    int swap;

    while (lb)
    {
        swap = lb->value;
        lb->value = lb->next->value;
        lb->next->value = swap;
        lb = lb->next;
    }
    if (c == 0)
        return (write(1, "rb", 2));
    return (1);
}

int ft_rr(t_list *la, t_list *lb)
{
    ft_ra(la, 1);
    ft_rb(lb, 1);
    return (write(1, "rr", 2));
}