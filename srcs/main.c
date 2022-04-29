/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:23:59 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/29 20:37:51 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	tosort;

	tosort.arr = ft_parse(ac, av);
	if (!tosort.arr)
		return (1);
	tosort.size = ft_calloc(1);
	*tosort.size = ft_size(ac, av);
	if (ft_check(tosort) == 1)
		return (1);
	ft_sort(tosort);
	free(tosort.arr);
	free(tosort.size);
	return (0);
}
