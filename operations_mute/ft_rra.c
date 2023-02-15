/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:38:49 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:07:16 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checker_bonus.h"

void	ft_rra(t_lists **a_head)
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
}
