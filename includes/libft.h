/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:42:20 by mcourtoi          #+#    #+#             */
/*   Updated: 2022/03/27 18:46:52 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

int				ft_atoi(char *nptr);
int				ft_isdigit(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);

void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstclear(t_list **lst);
void			ft_lstdelone(t_list *lst);;
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(int value, int index);
int				ft_lstsize(t_list *lst);

#endif
