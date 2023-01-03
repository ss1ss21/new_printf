/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:28:48 by ssonmez           #+#    #+#             */
/*   Updated: 2022/12/24 18:43:54 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printunsigned(unsigned int x)
{
    int a;
    
    a = 0;
    if (x > 9)
    {
        a += ft_printunsigned(x / 10);
        x = x % 10;
    }
    if (x <= 9)
    {
        a += ft_printputchar(x + 48);
    }
    return(a);
}