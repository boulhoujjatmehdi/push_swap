/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:04:25 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 19:50:37 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi_spe(const char *str, int *pass )
{
	int		i;
	long	ret;
	int		neg;

	i = 0;
	ret = 0;
	neg = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if ((str[i] == '-' || str[i] == '+') && ++i)
		if (str[i - 1] == '-')
			neg = -1;
	if (!ft_isdigit(str[i]) && (*pass)--)
		return (0);
	while (ft_isdigit(str[i]))
	{	
		ret = ret * 10 + str[i++] - 48;
		if ((ret < INT32_MIN || ret > INT32_MAX) && (*pass)--)
			return (0);
	}
	if (str[i] != ' ' && str[i] != '\t' && str[i] && (*pass)--)
		return (0);
	return (ret * neg);
}

void	check_dup(t_lists *lst)
{
	t_lists	*stable;
	t_lists	*runner;

	stable = lst;
	while (stable)
	{
		runner = stable->next;
		while (runner)
		{
			if (runner->nb == stable->nb)
			{
				free_list(lst);
				ft_error(2, 6, "Error");
			}
			runner = runner->next;
		}
		stable = stable ->next;
	}
}

typedef struct s_x
{
	int		i;
	int		j;
	int		tmp;
	int		pass;
	char	**spl;
}t_x;

void	set_args_in_list(int ac, char **av, t_lists **head)
{
	struct s_x	x;

	x.i = 1;
	x.pass = 1;
	while (x.i < ac)
	{
		x.j = 0;
		x.spl = ft_split(av[x.i], ' ');
		if (!*x.spl)
			x.spl[0] = ft_strdup("a");
		while (x.spl[x.j])
		{
			x.tmp = ft_atoi_spe(x.spl[x.j], &x.pass);
			if (x.pass)
				add_list_back(head, new_node(x.tmp));
			else if (ft_error(2, 3, "Error"))
				free_list(*head);
			x.j++;
		}
		free_mat(x.spl);
		x.i++;
	}
	check_dup(*head);
	if (!get_lenght(*head))
		exit(1);
}
