/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:20:43 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/14 16:23:44 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(t_lists **a_head, t_lists **b_head)
{
	t_lists	*tmp;
	t_lists	*tmp2;

	if (get_lenght(*a_head) > 1)
	{
		tmp = get_last(*a_head);
		tmp2 = get_before_last(*a_head);
		tmp2->next = NULL;
		add_list_front(a_head, tmp);
	}
	if (get_lenght(*a_head) > 1)
	{
		tmp = get_last(*b_head);
		tmp2 = get_before_last(*b_head);
		tmp2->next = NULL;
		add_list_front(b_head, tmp);
	}
}
