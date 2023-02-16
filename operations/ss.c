/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:05:15 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:25:40 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ss(t_lists **a_head, t_lists **b_head)
{
	t_lists	*swap;
	t_lists	*tmp;

	tmp = *a_head;
	swap = tmp->next;
	tmp->next = tmp->next->next;
	*a_head = swap;
	swap->next = tmp;
	tmp = *b_head;
	swap = tmp->next;
	tmp->next = tmp->next->next;
	*b_head = swap;
	swap->next = tmp;
	ft_printf("ss\n");
}
