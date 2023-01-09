/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:14:45 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/09 19:06:06 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rb(t_lists **lst)
{
    t_lists *tmp;

    tmp = *lst;
    *lst = tmp->next;
    tmp->next = NULL;
    add_list_back(lst, tmp);
}