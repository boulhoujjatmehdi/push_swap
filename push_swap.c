/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:46:46 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/06 19:20:26 by eboulhou         ###   ########.fr       */
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
void print_list(t_lists *lst, char *c)
{
	printf("%s  :",c);
	while(lst)
	{
		printf("%d . ",lst->nb);
		lst = lst->next;	
	}
	puts("");
}
int	main(int ac, char **av)
{
	t_lists *a_head;
	t_lists *b_head;
	b_head = NULL;
	set_args_in_list(ac, av, &a_head);
	print_list(a_head, "\n-a-");
	print_list(b_head, "-b-");

	// sa(&a_head);
	// print_list(a_head, "\n-a-");
	// print_list(b_head, "-b-");
	puts("\npb * 2");
	pb(&a_head, &b_head);
	pb(&a_head, &b_head);
	// pb(&a_head, &b_head);
	print_list(a_head, "\n-a-");
	print_list(b_head, "-b-");

	puts("\nsb * 1");
	sb(&b_head);
	print_list(a_head, "\n-a-");
	print_list(b_head, "-b-");
	
	puts("\npb * 1");
	pb(&a_head, &b_head);
	print_list(a_head, "\n-a-");
	print_list(b_head, "-b-");

	puts("\nsa * 1");
	sa(&a_head);
	print_list(a_head, "\n-a-");
	print_list(b_head, "-b-");

	
	pa(&a_head, &b_head);
	pa(&a_head, &b_head);
	pa(&a_head, &b_head);
	print_list(a_head, "\n-a-");
	print_list(b_head, "-b-");
	return (0);
}
