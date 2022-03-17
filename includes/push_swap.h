/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:27:20 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/17 04:42:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <libft.h>

t_list	**ft_parse_two(t_list **test, char **tab);
t_list	**ft_parse_one(t_list **test, char *tab);

int	ft_check_double(t_list *li);
int ft_check_sorted(t_list *li);
int ft_check_digits(char *str);
int	ft_check(t_list *tab);
int	ft_putstr(char *s);
int ft_numlen(int *n);

void    ft_free(t_list *li);

#endif
