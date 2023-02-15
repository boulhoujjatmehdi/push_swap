/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:26:22 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 19:50:37 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	set_weight(t_lists *al, t_lists *bl)
{
	t_lists	*aa;
	t_lists	*bb;

	aa = al;
	bb = bl;
	while (al)
	{
		if (get_pos(bl, get_big_min(bl, al->nb)) > get_lenght(bb) / 2
			&& --al->rb)
			al->weight = get_lenght(bb) - get_pos(bl, get_big_min(bl, al->nb));
		else if (++al->rb)
			al->weight = get_pos(bl, get_big_min(bl, al->nb));
		al->w_b = al->weight;
		if (get_lenght(aa) / 2 < get_pos(aa, al->nb) && --al->ra)
			al->weight += get_lenght(aa) - get_pos(aa, al->nb);
		else if (++al->ra)
			al->weight += get_pos(aa, al->nb);
		al->w_a = al->weight - al->w_b;
		minimize_weight(al);
		al = al->next;
	}
	return (0);
}

void	push_or_rotate(t_lists tmp, t_lists **a_head, t_lists **b_head)
{
	while (tmp.ra == tmp.rb && tmp.w_a && tmp.w_b)
	{
		if (tmp.ra == 1)
			rr(a_head, b_head);
		else
			rrr(a_head, b_head);
		tmp.w_a--;
		tmp.w_b--;
	}
	while (tmp.w_a--)
	{
		if (tmp.ra == 1)
			ra(a_head);
		else
			rra(a_head);
	}
	while (tmp.w_b--)
	{
		if (tmp.rb == 1)
			rb(b_head);
		else
			rrb(b_head);
	}
	pb(a_head, b_head);
}

void	push_to_b(t_lists **a_head, t_lists **b_head)
{
	t_lists	tmp;
	t_lists	*tt;

	pb(a_head, b_head);
	while (get_lenght(*a_head) - 5 > 0)
	{
		set_weight(*a_head, *b_head);
		tmp = get_min_weight(*a_head);
		push_or_rotate(tmp, a_head, b_head);
		tt = *a_head;
		initialize_weight(*a_head);
	}
	sort_5(a_head, b_head, get_lenght(*a_head));
}

void	push_back_a(t_lists **a_head, t_lists **b_head)
{
	int	counter;
	int	rrr;

	rrr = 0;
	counter = 0;
	set_on_top(b_head, get_max(*b_head), 'b');
	while (*b_head)
	{
		if ((*b_head)->nb < get_min(*a_head))
		{
			set_on_top(a_head, get_min(*a_head), 'a');
			pa(a_head, b_head);
		}
		else if (get_last(*a_head)->nb > (*b_head)->nb)
			rra(a_head);
		else
			pa(a_head, b_head);
	}
	set_on_top(a_head, get_min(*a_head), 'a');
}

void	sort_general(t_lists **a_head, t_lists **b_head)
{
	push_to_b(a_head, b_head);
	push_back_a(a_head, b_head);
}
