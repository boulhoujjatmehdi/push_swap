/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:46:46 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/06 15:29:20 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void set_args_in_list(int ac, char **av, t_lists **head)
{
	int i;
	// t_lists *head;
	i = 1;
	while(i < ac)
	{
		add_list_back(head, new_node(ft_atoi(av[i])));
		i++;
	}
}
void print_list(t_lists *lst)
{
	while(lst)
	{
		printf(lst->nb);
		lst = lst->next;	
	}
}
int	main(int ac, char **av)
{
	t_lists *a_head;
	t_lists *b_head;
	
	set_args_in_list(ac, av, &a_head);
	printf("%d\n", a_head->nb);
	printf("%d\n", a_head->next->nb);
	printf("%d\n\n", a_head->next->next->nb);

	rra(&a_head);

	// printf("%d", a_head->nb);
	printf("%d\n", a_head->nb);
	// printf("%d ------ ", a_head->next->nb);
	printf("%d\n", a_head->next->nb);
	

	
	printf("%d\n", a_head->next->next->nb);
	printf("%d\n", a_head->next->next->next->nb);
	return (0);
}
