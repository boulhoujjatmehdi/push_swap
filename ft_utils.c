/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:44:46 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/14 16:27:04 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lists	get_min_weight(t_lists *lst)
{
	int		wmin;
	t_lists	min_node;

	wmin = lst->weight;
	min_node = *lst;
	while (lst)
	{
		if (wmin > lst->weight)
		{
			wmin = lst->weight;
			min_node = *lst;
		}
		lst = lst->next;
	}
	return (min_node);
}

void	initialize_weight(t_lists *aa)
{
	while (aa)
	{
		aa->w_a = 0;
		aa->w_b = 0;
		aa->ra = 0;
		aa->rb = 0;
		aa = aa->next;
	}
}

void	minimize_weight(t_lists *node)
{
	int	wa;
	int	wb;

	wa = node->w_a;
	wb = node->w_b;
	while (node->ra == node->rb && wa && wb)
	{
		node->weight--;
		wa--;
		wb--;
	}
}

void	set_on_top(t_lists **head, int nb, int ab)
{
	int	counter;

	counter = get_pos(*head, nb);
	if (counter > 0 && get_lenght(*head) / 2 > counter)
	{
		while (counter--)
			if (ab == 'a')
				ra(head);
		else
			rb(head);
	}
	else if (counter > 0)
	{
		while (get_lenght(*head) > counter++)
		{
			if (ab == 'a')
				rra(head);
			else
				rrb(head);
		}
	}
}

void	free_mat(char **mat)
{
	int	i;

	i = 0;
	while (mat[i])
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}
