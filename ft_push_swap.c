/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:46:46 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/06 19:35:48 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void print_list(t_lists *lst, char *c)
{
	ft_printf("%s  :",c);
	while(lst)
	{
		ft_printf("%d ",lst->nb);
		lst = lst->next;
	}
}

int sorted_or_not(t_lists *lst)
{
	while(lst->next)
	{
		if(lst->nb > lst->next->nb)
			return 0;
		lst = lst->next;
	}
	return 1;
}

int sort_3(t_lists **head)
{
	t_lists *lst;
	while(!sorted_or_not(*head))
	{
		lst = *head;
		if(lst->nb < lst->next->nb)
		{
			rra(head);
		}
		else
		{
			sa(head);
		}
	}
	return 0;
}

int  push_back_on_right_pos(t_lists **a_head, t_lists **b_head)
{
	t_lists *lsta;
	t_lists *lstb;
	int i;

	i = INT32_MAX;
	lstb = *b_head;
	lsta = *a_head;

	if(get_max(*a_head) < lstb->nb)
		return get_min_5(*a_head,0);
	while(lsta)
	{
		if(lsta->nb > lstb->nb && lsta->nb < i)
			i = lsta->nb;
		lsta = lsta->next;
	}
	return i;
}

void sort_5(t_lists **a_head, t_lists **b_head, int ac)
{
	int j = ac - 4;
	while(j)
	{
		pb(a_head, b_head);
		j--;
	}
	sort_3(a_head);
		// exit(0);
	j = ac - 4;
	while(j--)
	{
		int i = push_back_on_right_pos(a_head, b_head);
		i = get_pos(*a_head, i);
		while(i--)
		{
			ra(a_head);
		}
			pa(a_head, b_head);
	}
	j = get_min_5(*a_head, 1);
	while(j--)
	{
		ra(a_head);
	}
}

int	main(int ac, char **av)
{
	if(ac == 1)
		return 0;
	t_lists *a_head;
	t_lists *b_head;
	b_head = NULL;
	a_head = NULL;

	set_args_in_list(ac, av, &a_head);
	ac = get_lenght(a_head);
	if(ac == 5||ac == 6)
		sort_5(&a_head, &b_head, ac);
	else if (ac == 3 || ac == 4)
		sort_3(&a_head);
	else if (ac > 6)
		sort_general(&a_head, &b_head);

	print_list(a_head, "--aa--");
	// return (0);
}
