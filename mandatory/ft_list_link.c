/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_link.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:16:40 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 19:50:37 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lists	*new_node(int nb)
{
	t_lists	*new;

	new = malloc(sizeof(t_lists));
	new->nb = nb;
	new->pos = 0;
	new->next = NULL;
	new->weight = 0;
	return (new);
}

void	add_list_front(t_lists **first, t_lists *new_first)
{
	if (first && new_first)
	{
		new_first->next = *first;
		*first = new_first;
	}
}

t_lists	*get_last(t_lists *ls)
{
	while (ls->next)
	{
		ls = ls->next;
	}
	return (ls);
}

void	add_list_back(t_lists **lst, t_lists *new_lat)
{
	t_lists	*tmp;

	if (!*lst)
		*lst = new_lat;
	else
	{
		tmp = get_last(*lst);
		tmp->next = new_lat;
	}
}

int	get_lenght(t_lists *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
