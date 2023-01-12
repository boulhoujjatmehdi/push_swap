/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:45:16 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/10 12:56:41 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_lists **a_head)
{
    t_lists *swap;
    t_lists *tmp;
    
    tmp = *a_head;
    swap = tmp->next;
    tmp->next = tmp->next->next;
    *a_head = swap;
    swap->next = tmp;
    ft_printf("sa\n");
}