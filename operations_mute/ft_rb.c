/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:14:45 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/14 15:30:46 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_lists **b_head)
{
	t_lists	*tmp;

	if (get_lenght(*b_head) > 1)
	{
		tmp = *b_head;
		*b_head = tmp->next;
		tmp->next = NULL;
		add_list_back(b_head, tmp);
	}
}
