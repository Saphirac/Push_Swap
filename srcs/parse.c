/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                     	    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:21:16 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/14 18:14:48 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_parse_one(char *tab)
{
	char	**split;
	int		*tosort;
	int		j;

	split = ft_split(tab, ' ');
	tosort = malloc(sizeof(int) * ft_strrlen(split));
	if (!tosort)
		return (NULL);
	j = -1;
	while (split[++j])
	{
		if (ft_check_digits(split[j]) == TRUE)
		{
			write(1, "Error\n", 6);
			ft_free(split);
			free(tosort);
			return (NULL);
		}
		tosort[j] = ft_atoi(split[j]);
	}
	ft_free(split);
	return (tosort);
}

int	*ft_parse_two(char **tab, int ac)
{
	int	*tosort;
	int	j;

	tosort = malloc(sizeof(int) * ac - 1);
	if (!tosort)
		return (NULL);
	j = -1;
	while (tab[++j])
	{
		if (ft_check_digits(tab[j]) == TRUE)
		{
			write(1, "Error\n", 6);
			free(tosort);
			return (NULL);
		}
		tosort[j] = ft_atoi(tab[j]);
	}
	return (tosort);
}
