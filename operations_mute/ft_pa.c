/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:11:24 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:07:16 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checker_bonus.h"

void	ft_pa(t_lists **a_head, t_lists **b_head)
{
	t_lists	*tmp;

	if (*b_head)
	{
		tmp = *b_head;
		*b_head = tmp->next;
		add_list_front(a_head, tmp);
	}
}
