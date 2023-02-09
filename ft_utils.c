/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:44:46 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/09 15:17:41 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void shorting (t_lists * )

void	initialize_weight(t_lists *aa)
{
	while (aa)
	{
		aa->w_a = 0;
		aa->w_b = 0;
		aa->ra = 0;
		aa->rb = 0;
		aa = aa->next;
	}
}
