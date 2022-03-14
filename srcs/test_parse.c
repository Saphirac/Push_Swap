
************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:21:16 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/14 18:14:48 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check(int *tab)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (tab[i])
	{
		while (tab[j])
		{
			if (tab[i] == tab[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	*ft_parse(char *tab)
{
	int	*tab;
	int	i;
	char	**split;

	i = 0;
	split = ft_split(tab, ' ');
	while (split[i])
		i++;
	tab = malloc(sizeof(int) * (i + 1));
	i = 0;
	while (split[i])
	{
		tab[i] = ft_atoi(split[i]);
		i++;
	}
}
