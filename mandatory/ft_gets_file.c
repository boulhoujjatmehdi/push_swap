/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gets_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:46:47 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:25:40 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	get_pos(t_lists *lst, int nb)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (lst->nb == nb)
			return (i);
		i++;
		lst = lst->next;
	}
	return (0);
}

int	get_min_5(t_lists *lst, int pos)
{
	int		nb;
	t_lists	*lst2;

	lst2 = lst;
	nb = INT32_MAX;
	while (lst)
	{
		if (lst->nb < nb)
			nb = lst->nb;
		lst = lst->next;
	}
	if (pos)
		nb = get_pos(lst2, nb);
	return (nb);
}

int	get_max(t_lists *lst)
{
	int		nb;
	t_lists	*lst2;

	lst2 = lst;
	nb = INT32_MIN;
	while (lst)
	{
		if (lst->nb > nb)
			nb = lst->nb;
		lst = lst->next;
	}
	return (nb);
}

int	get_min(t_lists *lst)
{
	int	tmp;

	tmp = lst->nb;
	while (lst)
	{
		if (tmp > lst->nb)
			tmp = lst->nb;
		lst = lst->next;
	}
	return (tmp);
}

int	get_big_min(t_lists *lst, int nb)
{
	int	tmp;

	if (nb < get_min(lst))
	{
		return (get_max(lst));
	}
	tmp = INT32_MIN;
	while (lst)
	{
		if (nb > lst->nb && lst->nb > tmp)
			tmp = lst->nb;
		lst = lst->next;
	}
	return (tmp);
}
