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

int	*ft_numjoin(int	*a, int *b)
{
	
}