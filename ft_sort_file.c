/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:26:22 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/09 19:03:15 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_min(t_lists *lst)
{
    int tmp;

    tmp = lst->nb;
    while(lst)
    {
        if(tmp > lst->nb)
            tmp = lst->nb;
        lst = lst->next;
    }
    return tmp;
}

int get_big_min(t_lists *lst, int nb)
{
    
    int tmp;

    if (nb < get_min(lst))
    {
        return get_max(lst);
    }

    tmp = INT32_MIN;
    while(lst)
    {
        if (nb > lst->nb && lst->nb > tmp)
            tmp = lst->nb;
        lst = lst->next;
    }
    return tmp;
}
int set_weight(t_lists *alst, t_lists *blst)
{
    t_lists *aa;
    t_lists *bb;
    // t_var v;
    
    aa = alst;
    bb = blst;
    while(alst)
    {
        if(get_pos(blst, get_big_min(blst, alst->nb)) > get_lenght(bb) / 2 + 1)
            alst->weight =   get_lenght(bb) - get_pos(blst, get_big_min(blst, alst->nb));
        else
             alst->weight = get_pos(blst, get_big_min(blst, alst->nb));
        if (get_lenght(aa) / 2 < get_pos(aa, alst->nb))
             alst->weight += get_lenght(aa) - get_pos(aa, alst->nb);
        else
            alst->weight += get_pos(aa, alst->nb);
        alst = alst->next;
    }
    return 0;
}

void sort_general(t_lists **a_head, t_lists **b_head)
{
    pb(a_head, b_head);
    pb(a_head, b_head);
    pb(a_head, b_head);
    set_weight(*a_head, *b_head);
    t_lists *lst = *a_head;
    while(lst)
    {
        printf("%d -- %d\n", lst->nb , lst->weight);
        lst = lst->next;
    }
}