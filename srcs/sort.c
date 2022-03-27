/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 23:39:09 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/27 19:22:31 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort(int *tosort, int size)
{
    //int  *b;

    //b = malloc(sizeof(int) * size + 1);
    if (size == 2)
        ft_sa(tosort, 0);
    else if (size == 3)
        ft_sort_three(tosort, size);
}