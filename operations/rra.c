/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:38:49 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:25:40 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

t_lists	*get_before_last(t_lists *lst)
{
	while (lst->next->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	rra(t_lists **a_head)
{
	t_lists	*tmp;
	t_lists	*tmp2;

	tmp = get_last(*a_head);
	tmp2 = get_before_last(*a_head);
	tmp2->next = NULL;
	add_list_front(a_head, tmp);
	ft_printf("rra\n");
}
