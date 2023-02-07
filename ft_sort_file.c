/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:26:22 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/06 17:41:05 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int set_weight(t_lists *al, t_lists *bl)
{
	t_lists *aa;
	t_lists *bb;
	
	aa = al;
	bb = bl;
	while(al)
	{
		if(get_pos(bl, get_big_min(bl, al->nb)) > get_lenght(bb) / 2  && --al->rb)
			al->weight = get_lenght(bb) - get_pos(bl, get_big_min(bl, al->nb));
		else if(++al->rb)
			 al->weight = get_pos(bl, get_big_min(bl, al->nb));
		al->w_b = al->weight;
		if (get_lenght(aa) / 2 < get_pos(aa, al->nb) && --al->ra )
			 al->weight += get_lenght(aa) - get_pos(aa, al->nb);
		else if(++al->ra)
			al->weight += get_pos(aa, al->nb);
		al->w_a = al->weight - al->w_b;
		al = al->next;
	}
	return 0;
}

t_lists get_min_weight(t_lists *lst)
{
	int wmin;
	t_lists min_node;

	wmin = lst->weight;
	min_node = *lst;
	while(lst)
	{
		if (wmin > lst->weight)
		{
			wmin = lst->weight;
			min_node = *lst;
		}
		lst = lst->next;
	}
	return min_node;
}

void push_to_b(t_lists **a_head, t_lists **b_head)
{
	t_lists *lst;
	t_lists tmp;
	t_lists *tt;
	
	lst = *a_head;
	while(lst)
	{

		set_weight(*a_head, *b_head);
		tmp = get_min_weight(lst);
		while(tmp.w_a--)
			if(tmp.ra == 1)
				ra(a_head);
			else 
				rra(a_head);
		while(tmp.w_b--)
		{
			if(tmp.rb == 1)
				rb(b_head);
			else
				rrb(b_head);
		}
		pb(a_head, b_head);
		tt = *a_head;
		initialize_weight(*a_head);
		lst = *a_head;
	}
}
void push_back_a(t_lists **a_head, t_lists **b_head)
{
	int counter;
	int rrr;

	rrr = 0;
	counter = 0;
	if(get_lenght(*b_head) / 2 < get_pos(*b_head, get_max(*b_head)))
		counter = get_lenght(*b_head) - get_pos(*b_head, get_max(*b_head));
	else if(++rrr)
		counter = get_pos(*b_head, get_max(*b_head));
	while(counter--)
	{
		if(rrr)
			rb(b_head);
		else
			rrb(b_head);
	}
	while(*b_head)
	{
		pa(a_head, b_head);
	}
	
	(void)a_head;
}

void sort_general(t_lists **a_head, t_lists **b_head)
{
	pb(a_head, b_head);
	// pb(a_head, b_head);
	// t_lists *lst = *a_head;
	push_to_b(a_head, b_head);
	push_back_a(a_head, b_head);
}
