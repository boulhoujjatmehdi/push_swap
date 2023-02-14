/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:48:55 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/14 16:42:29 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_lists	*a_head;
	t_lists	*b_head;

	if (ac == 1)
		return (1);
	b_head = NULL;
	a_head = NULL;
	set_args_in_list(ac, av, &a_head);
	ac = get_lenght(a_head);
	if (ac <= 3)
		sort_3(&a_head);
	else if (ac <= 5)
		sort_5(&a_head, &b_head, ac);
	else if (ac >= 6)
		sort_general(&a_head, &b_head);
	free_list(a_head);
}
