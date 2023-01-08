/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:12:37 by ssonmez           #+#    #+#             */
/*   Updated: 2023/01/08 17:16:11 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printhxa(unsigned int x, const char a);
int		ft_printunsigned(unsigned int x);
int		ft_printputnbr(int nb);
int		ft_printputchar(char c);
int		ft_printputstr(char *str);
int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
int		ft_printptr(unsigned long long x);

#endif
