/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:14:45 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/10 12:23:31 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rb(t_lists **b_head)
{
    t_lists *tmp;

    tmp = *b_head;
    *b_head = tmp->next;
    tmp->next = NULL;
    add_list_back(b_head, tmp);
    ft_printf("rb\n");
}