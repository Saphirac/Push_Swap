/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:52:18 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/17 21:01:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    ft_pa(t_list **la, t_list **lb)
{
    t_list  *head;

    if (la)
    {
        if (lb)
        {
            head = *lb;
            ft_lstadd_front(la, head);
            ft_pop_front(lb);
        }
    }
    return (write(1, "pa", 2));
}

int    ft_pb(t_list **lb, t_list **la)
{
    t_list  *head;

    if (lb)
    {
        if (la)
        {
            head = *la;
            ft_lstadd_front(lb, head);
            ft_pop_front(la);
        }
    }
    return (write(1, "pb", 2));
}

void    ft_pop_front(t_list **li)
{
    t_list  *tmp;

    if (li)
    {
        tmp = (*li)->next;
        ft_lstdelone(*li);
        *li = NULL;
        *li = tmp;
    }
}