/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:11:24 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/09 19:25:30 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pa(t_lists **a_head, t_lists **b_head)
{
        t_lists *tmp;

    tmp  = *b_head;
    *b_head = tmp->next;

    add_list_front(a_head, tmp);
}