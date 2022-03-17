/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:27:20 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/17 21:08:14 by marvin           ###   ########.fr       */
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
int	ft_putstr(char *s);
int ft_numlen(int *n);

void    ft_free(t_list *li);

/*-----Moves-----*/

/*---Swap---*/
int    ft_ss(t_list *la, t_list *lb);
int    ft_sa(t_list *la, int c);
int    ft_sb(t_list *lb, int c);
/*---Push---*/
int    ft_pa(t_list **la, t_list **lb);
int    ft_pb(t_list **lb, t_list **la);

void    ft_pop_front(t_list **li);

/*---Rotate---*/
int ft_rr(t_list *la, t_list *lb);
int ft_ra(t_list *la, int c);
int ft_rb(t_list *lb, int c);

/*---Reverse_Rotate---*/
int ft_rrr(t_list **la, t_list **lb);
int ft_rra(t_list **la, int c);
int ft_rrb(t_list **lb, int c);

void    ft_pop_back(t_list **li);






#endif
