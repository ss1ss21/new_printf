/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dontgu <dontgu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:12:37 by ssonmez           #+#    #+#             */
/*   Updated: 2022/12/29 23:45:41 by dontgu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H 

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int     ft_printhxa(unsigned int x, const char a);
int     ft_printunsigned(unsigned int x);
int		ft_printputnbr(int nb);
int		ft_printputchar(char c);
int		ft_printputstr(char *str);
int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
int 	ft_printptr(unsigned long long x);

#endif