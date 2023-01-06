/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:45:16 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/05 17:34:47 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_lists **head)
{
    t_lists *swap;
    t_lists *tmp;
    
    tmp = *head;
    swap = tmp->next;
    tmp->next = tmp->next->next;
    *head = swap;
    swap->next = tmp;
}