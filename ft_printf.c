/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:40:30 by ssonmez           #+#    #+#             */
/*   Updated: 2023/01/08 17:34:22 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process(va_list *l, char frmt)
{
	int	a;

	a = 0;
	if (frmt == 'c')
		a += ft_printputchar(va_arg(*l, int));
	if (frmt == 's')
		a += ft_printputstr(va_arg(*l, char *));
	if (frmt == '%')
		a += ft_printputchar('%');
	if (frmt == 'd' || frmt == 'i')
		a += ft_printputnbr(va_arg(*l, int));
	if (frmt == 'p')
	{
		a += ft_printputstr("0x");
		a += ft_printptr(va_arg(*l, unsigned long long));
	}
	if (frmt == 'u')
		a += ft_printunsigned(va_arg(*l, unsigned int));
	if (frmt == 'x' || frmt == 'X')
		a += ft_printhxa(va_arg(*l, unsigned int), frmt);
	return (a);
}

int	ft_printf(const char *str, ...)
{
	va_list	a_list;
	int		i;
	int		a;
	va_list	*alist;

	alist = &a_list;
	a = 0;
	i = 0;
	va_start(a_list, str);
	while (str[i])
	{
		if (str[i] == '%' && str[++i])
		{
			a += process(alist, str[i++]);
		}
		else
		{
			a += ft_printputchar(str[i++]);
		}
	}
	va_end(a_list);
	return (a);
}
