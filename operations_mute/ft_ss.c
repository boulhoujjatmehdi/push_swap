/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:05:15 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/14 16:23:59 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_lists **a_head, t_lists **b_head)
{
	t_lists	*swap;
	t_lists	*tmp;

	if (get_lenght(*a_head) > 1)
	{
		tmp = *a_head;
		swap = tmp->next;
		tmp->next = tmp->next->next;
		*a_head = swap;
		swap->next = tmp;
	}
	if (get_lenght(*b_head) > 1)
	{
		tmp = *b_head;
		swap = tmp->next;
		tmp->next = tmp->next->next;
		*b_head = swap;
		swap->next = tmp;
	}
}
