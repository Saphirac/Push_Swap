/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:24:07 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/15 12:55:04 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putstr(char *s)
{
	return(write(1, s, ft_strlen(s)));
}

int	ft_numlen(int *n)
{
	int	i;

	i = 0;
	if (n[i] == 0)
		i++;
	while (n[i])
		i++;
	return (i);
}

/*int	*ft_numjoin(int	*a, int *b)
{
	int	*c;
	int	i;
	int	n;
	
	if (!a)
	{
		a = malloc(sizeof(int) * 1);
		a[0] = 0;
	}
	if (!a || !b)
		return (NULL);
	c = malloc(sizeof(int) * (ft_numlen(a) + ft_numlen(b) + 1));
	if (!a)
		return (NULL);
	i = 0;
	n = 0;
	while (a[i++])
		c[n++] = a[i - 1];
	i = 0;
	while (b[i++])
		c[n++] = b[i - 1];
	c[n] = 0;
	free(a);
	return (c);
}*/