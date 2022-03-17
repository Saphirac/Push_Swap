/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:40:19 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/17 19:10:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    ft_sa(t_list *la, int c)
{
    int swap;
    
    swap = la->value;
    la->value = la->next->value;
    la->next->value = swap;
    
    if (c == 0)
        return (write(1, "sa", 2));
    return (1);
}

int    ft_sb(t_list *lb, int c)
{
    int swap;
    
    swap = lb->value;
    lb->value = lb->next->value;
    lb->next->value = swap;
    
    if (c == 0)
        return (write(1, "sb", 2));
     return (1);
}

int    ft_ss(t_list *la, t_list *lb)
{
    ft_sa(la, 1);
    ft_sb(lb, 1);
    return (write(1, "ss", 2)); 
}