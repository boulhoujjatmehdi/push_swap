/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_bonus.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:37:42 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/14 16:42:22 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECKER_BONUS_H
# define FT_CHECKER_BONUS_H   

//
// # include <unistd.h>
# include "printf/ft_printf.h"
# include "libft/libft.h"
# include "gnl/get_next_line.h"

typedef struct s_lists
{
	int				nb;
	int				pos;
	int				weight;
	int				w_a;
	int				w_b;
	int				ra;
	int				rb;
	struct s_lists	*next;
}	t_lists;

typedef struct s_var
{
	int	i;
	int	j;
	int	k;
}	t_var;

typedef struct s_move
{
	char			*mv;
	struct s_move	*next;
}	t_move;

// functions prototypes

int		sorted_or_not(t_lists *lst);
// linked lists
t_lists	*new_node(int nb);
void	add_list_front(t_lists **first, t_lists *new_first);
t_lists	*get_last(t_lists *ls);
void	add_list_back(t_lists **lst, t_lists *new_lat);
int		get_lenght(t_lists *lst);
void	free_list(t_lists *lst);

// operations
void	ft_sa(t_lists **head);
void	ft_sb(t_lists **head);
void	ft_ss(t_lists **a_head, t_lists **b_head);
void	ft_pa(t_lists **a_head, t_lists **b_head);
void	ft_pb(t_lists **aa, t_lists **bb);
void	ft_ra(t_lists **lst);
void	ft_rb(t_lists **lst);
void	ft_rr(t_lists **a_head, t_lists **b_head);
void	ft_rra(t_lists **lst);
void	ft_rrb(t_lists **lst);
void	ft_rrr(t_lists **a_head, t_lists **b_head);
t_lists	*get_before_last(t_lists *lst);

// args
void	set_args_in_list(int ac, char **av, t_lists **head);

//utils
int		is_valid(char *str);
int		add_instruction(t_move **moves, char *str);
t_move	*new_move(char *str);
int		ft_error(int nb, char *message);
#endif