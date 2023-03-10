/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:44:52 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:07:16 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checker_bonus.h"

void	ft_pb(t_lists **a_head, t_lists **b_head)
{
	t_lists	*tmp;

	if (get_lenght(*a_head))
	{
		tmp = *a_head;
		*a_head = tmp->next;
		add_list_front(b_head, tmp);
	}
}
