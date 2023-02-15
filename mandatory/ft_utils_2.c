/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:27:20 by eboulhou          #+#    #+#             */
/*   Updated: 2023/02/15 19:50:37 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
