/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:40:19 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/15 12:51:51 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    *ft_sa(int *a)
{
    int swap;
    swap = a[0];
    a[0] = a[1];
    a[1] = swap;
    return ("sa");
}

char    *ft_sb(int *b)
{
    int swap;
    swap = b[0];
    b[0] = b[1];
    b[1] = swap;
    return ("sb");
}

char    *ft_ss(int *a, int *b)
{
    ft_sa(a);
    ft_sb(b);
    return ("ss"); 
}