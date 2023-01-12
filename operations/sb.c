/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:01:03 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/10 12:57:37 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sb(t_lists **b_head)
{
    t_lists *swap;
    t_lists *tmp;
    
    tmp = *b_head;
    swap = tmp->next;
    tmp->next = tmp->next->next;
    *b_head = swap;
    swap->next = tmp;
    ft_printf("sb\n");
}