/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:24:07 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/26 22:45:24 by mcourtoi         ###   ########.fr       */
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

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int	size;
	int	i;

	if (!src)
		return (NULL);
	size = ft_strlen(src);
	if (n > size)
		return (NULL);
	dest = malloc(sizeof(char) * (size - n) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[n])
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}