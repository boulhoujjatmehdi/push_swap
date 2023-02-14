/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:19:58 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/14 16:23:27 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_lists **a_head)
{
	t_lists	*tmp;

	if (get_lenght(*a_head) > 1)
	{
		tmp = *a_head;
		*a_head = tmp->next;
		tmp->next = NULL;
		add_list_back(a_head, tmp);
	}
}
