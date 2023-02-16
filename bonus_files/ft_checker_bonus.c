/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:32:30 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/16 12:27:16 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checker_bonus.h"

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
			ft_error(2, 2, "Error");
		str = get_next_line(0);
	}
	do_moves(moves, &a_head, &b_head);
	if (b_head || !sorted_or_not(a_head))
		ft_error(1, 3, "KO");
	ft_error(1, 0, "OK");
}
