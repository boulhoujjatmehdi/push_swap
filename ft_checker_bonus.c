/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:32:30 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/14 16:22:12 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

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

int	main(int ac, char **av)
{
	t_lists	*a_head;
	t_lists	*b_head;
	t_move	*moves;
	char	*str;

	if (ac == 1)
		return (1);
	b_head = NULL;
	a_head = NULL;
	set_args_in_list(ac, av, &a_head);
	moves = NULL;
	str = NULL;
	str = get_next_line(0);
	while (str)
	{
		if (!add_instruction(&moves, str))
			ft_error(2, "Error\n");
		str = get_next_line(0);
	}
	do_moves(moves, &a_head, &b_head);
	if (b_head || !sorted_or_not(a_head))
		ft_error(3, "KO\n");
	ft_printf("OK\n");
	return (0);
}
