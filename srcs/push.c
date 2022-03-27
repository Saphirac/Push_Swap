/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:52:18 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/27 18:51:40 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    ft_pa(int *la, int *lb)
{
    if (la)
        if (lb)
            return (1);
    return (write(1, "pa", 2));
}

int    ft_pb(int *lb, int *la)
{
    if (lb)
        if (la)
            return (1);
    return (write(1, "pb", 2));
}

/*void  ft_pop_front(t_list **li)
{
    t_list  *tmp;

    if (li)
    {
        tmp = (*li)->next;
        ft_lstdelone(*li);
        *li = tmp;
    }
}*/