/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printputnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:18:51 by ssonmez           #+#    #+#             */
/*   Updated: 2023/01/08 17:08:39 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

int	rtrn(int b)
{
	int	i;

	i = 1;
	if (b < 0)
	{
		i++;
		b = -b;
	}
	while (b >= 10)
	{
		b = b / 10;
		i++;
	}
	return (i);
}

int	ft_printputnbr(int nb)
{
	int	b;

	b = rtrn(nb);
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchr('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_printputnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchr(nb + 48);
	return (b);
}
