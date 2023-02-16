/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_link_extra.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:21:08 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 20:25:40 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	free_list(t_lists *lst)
{
	t_lists	*tmp;

	tmp = lst;
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst->next = NULL;
		lst = tmp;
	}
}
