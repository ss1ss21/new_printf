/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printputstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dontgu <dontgu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:20:59 by ssonmez           #+#    #+#             */
/*   Updated: 2023/01/03 15:55:41 by dontgu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printputstr(char *str)
{
	int i;

	i = 0;
	if(str == NULL)
	{
		write(1, "(null)", 6);
		return(6);
	}
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
	return(ft_strlen(str));
}

