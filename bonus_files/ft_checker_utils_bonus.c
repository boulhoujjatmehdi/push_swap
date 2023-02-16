/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_utils_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:45:26 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/16 11:59:03 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checker_bonus.h"

t_move	*new_move(char *str)
{
	t_move	*new;

	new = malloc(sizeof(t_move));
	new->next = NULL;
	new->mv = str;
	return (new);
}

int	add_instruction(t_move **moves, char *str)
{
	t_move	*tmp;

	if (!is_valid(str))
		return (0);
	if (!*moves)
		*moves = new_move(str);
	else
	{
		tmp = *moves;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_move(str);
	}
	return (1);
}

int	is_valid(char *str)
{
	if (!ft_memcmp(str, "sa\n", 4) || !ft_memcmp(str, "sb\n", 4)
		|| !ft_memcmp(str, "pa\n", 4) || !ft_memcmp(str, "pb\n", 4)
		|| !ft_memcmp(str, "ra\n", 4) || !ft_memcmp(str, "rb\n", 4)
		|| !ft_memcmp(str, "rra\n", 5) || !ft_memcmp(str, "rrb\n", 5)
		|| !ft_memcmp(str, "rrr\n", 5) || !ft_memcmp(str, "rr\n", 4)
		|| !ft_memcmp(str, "ss\n", 4))
		return (1);
	return (0);
}

void	extra_moves(t_move *move, t_lists **a_head, t_lists **b_head)
{
	if (!ft_memcmp(move->mv, "rra\n", 4))
		ft_rra(a_head);
	else if (!ft_memcmp(move->mv, "rrb\n", 4))
		ft_rrb(b_head);
	else if (!ft_memcmp(move->mv, "rrr\n", 4))
		ft_rrr(a_head, b_head);
}

void	do_moves(t_move *move, t_lists **a_head, t_lists **b_head)
{
	while (move)
	{
		if (!ft_memcmp(move->mv, "sa\n", 4))
			ft_sa(a_head);
		else if (!ft_memcmp(move->mv, "sb\n", 4))
			ft_sa(b_head);
		else if (!ft_memcmp(move->mv, "ss\n", 4))
			ft_ss(a_head, b_head);
		else if (!ft_memcmp(move->mv, "pa\n", 4))
			ft_pa(a_head, b_head);
		else if (!ft_memcmp(move->mv, "pb\n", 4))
			ft_pb(a_head, b_head);
		else if (!ft_memcmp(move->mv, "ra\n", 4))
			ft_ra(a_head);
		else if (!ft_memcmp(move->mv, "rb\n", 4))
			ft_rb(b_head);
		else if (!ft_memcmp(move->mv, "rr\n", 4))
			ft_rr(a_head, b_head);
		else
			extra_moves(move, a_head, b_head);
		move = move->next;
	}
}
