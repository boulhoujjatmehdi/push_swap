/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:33:10 by eboulhou          #+#    #+#             */
/*   Updated: 2023/01/09 19:34:41 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoaa(int nb)
{
	int		count;
	long	nnb;

	nnb = nb;
	count = 0;
	if (nnb < 0)
	{
		count += ft_putchar('-');
		nnb *= -1;
	}
	if (nnb >= 10)
		count += ft_itoaa(nnb / 10);
	count += ft_putchar(nnb % 10 + '0');
	return (count);
}

int	ft_uitoa(unsigned int nb)
{
	int		count;
	long	nnb;

	nnb = nb;
	count = 0;
	if (nnb < 0)
	{
		count += ft_putchar('-');
		nnb *= -1;
	}
	if (nnb >= 10)
		count += ft_itoaa(nnb / 10);
	count += ft_putchar(nnb % 10 + '0');
	return (count);
}
