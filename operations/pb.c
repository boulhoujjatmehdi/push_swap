/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:44:52 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/10 12:20:27 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pb(t_lists **a_head, t_lists **b_head)
{
    t_lists *tmp;

    tmp  = *a_head;
    *a_head = tmp->next;
    add_list_front(b_head, tmp);
    ft_printf("pb\n");
}