/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:19:37 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:07:16 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checker_bonus.h"

void	ft_rrb(t_lists **b_head)
{
	t_lists	*tmp;
	t_lists	*tmp2;

	if (get_lenght(*b_head) > 1)
	{
		tmp = get_last(*b_head);
		tmp2 = get_before_last(*b_head);
		tmp2->next = NULL;
		add_list_front(b_head, tmp);
	}
}
