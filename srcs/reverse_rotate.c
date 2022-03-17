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

int ft_rra(t_list **la, int c)
{
    t_list  *tmp;

    if (la)
    {
        tmp = ft_pop_back(la);
        ft_lstadd_front(la, tmp);
    }
    if (c == 0)
        return (write(1, "rra", 3));
    return (1);
}

int ft_rrb(t_list **lb, int c)
{
    t_list  *tmp;

    if (lb)
    {
        tmp = ft_pop_back(lb);
        ft_lstadd_front(lb, tmp);
    }
    if (c == 0)
        return (write(1, "rrb", 3));
    return (1);
}

int ft_rrr(t_list **la, t_list **lb)
{
    ft_rra(la, 1);
    ft_rrb(lb, 1);
    return (write(1, "rrr", 3));
}

t_list  *ft_pop_back(t_list **li)
{
    t_list  *tmp;
    t_list  *ret;

    ret = NULL;
    if(li)
    {
        tmp = *li;
        while (tmp && tmp->next->next)
            tmp = tmp->next;
        ret = ft_lstnew(tmp->next->value, tmp->next->index);
        ft_lstdelone(tmp->next);
        tmp->next = NULL;
    }
    return (ret);
}