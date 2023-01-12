/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:16:40 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/10 12:24:56 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rr(t_lists **a_head, t_lists **b_head)
{
    t_lists *tmp;
    
    tmp = *a_head;
    *a_head = tmp->next;
    tmp->next = NULL;
    add_list_back(a_head, tmp);

    tmp = *b_head;
    *b_head = tmp->next;
    tmp->next = NULL;
    add_list_back(b_head, tmp);
    
    ft_printf("rr\n");
    
}