/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:27:20 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/04/02 21:50:29 by mcourtoi         ###   ########.fr       */
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

/*-----Parse-----*/
int		*ft_parse_two(char **tab, int ac);
int		*ft_parse_one(char *tab);

/*-----Checks-----*/
int		ft_check_double(int *tab, int size);
int		ft_check_sorted(int *i, int size);
int		ft_check_digits(char *str);
int		ft_check(int *tosort, int size);

/*-----Other-----*/
int		ft_strrlen(char **str);
int		ft_putstr(char *s);

void	ft_free(char **str);

/*-----Moves-----*/

/*---Swap---*/
int		ft_ss(int *la, int *lb);
int		ft_sa(int *la, int c);
int		ft_sb(int *lb, int c);
/*---Push---*/
int		ft_pa(int *la, int *lb, int *sizea, int *sizeb);
int		ft_pb(int *lb, int *la, int *sizeb, int *sizea);

/*---Rotate---*/
int		ft_rr(int *la, int *lb, int size);
int		ft_ra(int *la, int size, int c);
int		ft_rb(int *lb, int size, int c);

/*---Reverse_Rotate---*/
int		ft_rrr(int *la, int *lb, int size);
int		ft_rra(int *la, int size, int c);
int		ft_rrb(int *lb, int size, int c);

/*-----Sort-----*/
void	ft_sort_three(int *tosort, int size);
int		*ft_fill_k(int *tosort, int size);
void	ft_sort(int *tosort, int size);
int		*ft_lis(int *tosort, int size);
int		ft_size_lis(int *k, int size);

#endif
