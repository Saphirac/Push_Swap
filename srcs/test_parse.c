
/* ************************************************************************** */
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
	int	*test;
	int	i;
	int	j;
	char	**split;

	j = 0;
	split = ft_split(tab, ' ');
	while (split[j])
		j++;
	test = malloc(sizeof(int) * (j + 1));
	i = 0;
	while (split[i])
	{
		test[i] = ft_atoi(split[i]);
		i++;
	}
	printf("testlen : %d\n", ft_numlen(test));
	if (ft_numlen(test) != j || ft_numlen(test) == 1 || ft_check(test) == 1)
		return (NULL);
	return (test);
}