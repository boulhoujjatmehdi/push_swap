/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:19:58 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/05 18:30:57 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_lists **lst)
{
    t_lists *tmp;
    
    tmp = *lst;
    *lst = tmp->next;
    tmp->next = NULL;
    add_list_back(lst, tmp);
    
    
}