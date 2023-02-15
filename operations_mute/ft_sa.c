/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:45:16 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:07:16 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checker_bonus.h"

void	ft_sa(t_lists **a_head)
{
	t_lists	*swap;
	t_lists	*tmp;

	if (get_lenght(*a_head) > 1)
	{
		tmp = *a_head;
		swap = tmp->next;
		tmp->next = tmp->next->next;
		*a_head = swap;
		swap->next = tmp;
	}
}
