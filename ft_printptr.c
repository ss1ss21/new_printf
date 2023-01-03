/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:33:00 by ssonmez           #+#    #+#             */
/*   Updated: 2022/12/24 18:44:09 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int   ft_putptr(int a)
{
    if(a <= 9)
       return ft_printputchar(a + 48);
    else
        return ft_printputchar(a + 87);
}

int ft_printptr(unsigned long long x)
{
    int i;

    i = 0;
    if(x >= 16)
    {
        i += ft_printptr(x / 16);
        i += ft_putptr((x % 16));
    }
    else
        i += ft_putptr(x);
    return(i);
}
