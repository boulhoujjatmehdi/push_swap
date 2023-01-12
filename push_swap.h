/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:46:44 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/11 10:33:27 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

// todel
#include <stdio.h>

// to keep
#include <unistd.h>
#include "printf/ft_printf.h"
#include "libft/libft.h"

// structs
typedef struct s_lists
{
    int nb;
    int pos;
    int weight;
    int w_a;
    int w_b;
    int ra;
    int rb;
    struct s_lists *next;
} t_lists;

typedef struct s_var
{
    int i;
    int j;
    int k;
} t_var;

// functions prototypes
// linked lists
t_lists *new_node(int nb);
void add_list_front(t_lists **first, t_lists *new_first);
t_lists *get_last(t_lists *ls);
void add_list_back(t_lists **lst, t_lists *new_lat);
int get_lenght(t_lists *lst);

// operations
void sa(t_lists **head);
void sb(t_lists **head);
void ss(t_lists **a_head, t_lists **b_head);
void pa(t_lists **a_head, t_lists **b_head);
void pb(t_lists **aa, t_lists **bb);
void ra(t_lists **lst);
void rb(t_lists **lst);
void rr(t_lists **a_head, t_lists **b_head);
void rra(t_lists **lst);
void rrb(t_lists **lst);
void rrr(t_lists **a_head, t_lists **b_head);
t_lists *get_before_last(t_lists *lst);

// get functions file
int get_pos(t_lists *lst, int nb);
int get_min_5(t_lists *lst, int pos);
int get_max(t_lists *lst);
int get_min(t_lists *lst);
int get_big_min(t_lists *lst, int nb);

// sort_file
void sort_general(t_lists **a_head, t_lists **b_head);
int get_big_min(t_lists *lst, int nb);
int get_min(t_lists *lst);

//ft_utils
void initialize_weight(t_lists *aa);


#endif