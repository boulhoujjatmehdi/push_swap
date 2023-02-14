/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:45:26 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/14 16:28:53 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

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
