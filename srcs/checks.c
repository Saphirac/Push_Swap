/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 03:35:24 by marvin            #+#    #+#             */
/*   Updated: 2022/03/17 03:35:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_sorted(t_list *li)
{
    int c;
    
    while (li && li->next)
    {
        c = li->value;
        li = li->next;
        if (c > li->value)
            return (1);
    }
    return (0);
}

int ft_check_digits(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (ft_isdigit(str[i]) == FALSE && str[i] != '-')
            return (1);
        i++;
    }
    if (str[0] == '-')
        i--;
    if (!ft_strncmp(str, "-2147483649", 11)
            || !ft_strncmp(str, "2147483648", 10))
        return (1);
    if (i >= 11)
        return (1); 
    return (0);
}

int	ft_check_double(t_list *li)
{
	t_list	*temp;
	
	while (li)
	{
        temp = li->next;
		while (temp)
		{
			if (li->value == temp->value)
				return (1);
			temp = temp->next;
		}
		li = li->next;
	}
	return (0);
}