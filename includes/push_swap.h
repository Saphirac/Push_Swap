/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:27:20 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/27 20:21:43 by mcourtoi         ###   ########.fr       */
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

/*---Parse---*/
t_list	**ft_parse_two(t_list **test, char **tab);
t_list	**ft_parse_one(t_list **test, char *tab);

/*---Checks---*/
int	ft_check_double(t_list *li);
int ft_check_sorted(t_list *li);
int ft_check_digits(char *str);

/*---Other---*/
char    *ft_strndup(char *src, int n);
int	ft_putstr(char *s);
int ft_numlen(int *n);

void    ft_free(char **str);

/*-----Moves-----*/

/*---Swap---*/
int    ft_ss(int *la, int *lb);
int    ft_sa(int *la, int c);
int    ft_sb(int *lb, int c);
/*---Push---*/
int    ft_pa(int *la, int *lb);
int    ft_pb(int *lb, int *la);

void    ft_pop_front(t_list **li);

/*---Rotate---*/
int ft_rr(int *la, int *lb, int size);
int ft_ra(int *la, int size, int c);
int ft_rb(int *lb, int size, int c);

/*---Reverse_Rotate---*/
int ft_rrr(int *la, int *lb, int size);
int ft_rra(int *la, int size, int c);
int ft_rrb(int *lb, int size, int c);

t_list  *ft_pop_back(t_list **li);






#endif
