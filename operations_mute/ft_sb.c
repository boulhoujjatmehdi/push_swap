/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:01:03 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:07:16 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checker_bonus.h"

void	ft_sb(t_lists **b_head)
{
	t_lists	*swap;
	t_lists	*tmp;

	if (get_lenght(*b_head) > 1)
	{
		tmp = *b_head;
		swap = tmp->next;
		tmp->next = tmp->next->next;
		*b_head = swap;
		swap->next = tmp;
	}
}
