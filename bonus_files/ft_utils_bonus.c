/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:44:46 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/16 11:45:38 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_checker_bonus.h"

int	sorted_or_not(t_lists *lst)
{
	while (lst->next)
	{
		if (lst->nb > lst->next->nb)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	free_mat(char **mat)
{
	int	i;

	i = 0;
	while (mat[i])
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}

void	puterror(char *s, int std)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(std, &s[i], 1);
		i++;
	}
	write(std, "\n", 1);
}

int	ft_error(int std, int nb, char *message)
{
	puterror(message, std);
	exit(nb);
	return (1);
}
