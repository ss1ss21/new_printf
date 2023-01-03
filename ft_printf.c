/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dontgu <dontgu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:40:30 by ssonmez           #+#    #+#             */
/*   Updated: 2023/01/03 16:13:51 by dontgu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int process(va_list *l,char frmt)
{
	int a;

	a = 0;
    if(frmt == 'c')
        a += ft_printputchar(va_arg(*l, int));
	if(frmt == 's')
		a += ft_printputstr(va_arg(*l, char *));
	if(frmt == '%')
		a += ft_printputchar('%');
	if(frmt == 'd' || frmt == 'i')
		a += ft_printputnbr(va_arg(*l, int));	
	if(frmt == 'p')
	{
		a += ft_printputstr("0x");
		a += ft_printptr(va_arg(*l, unsigned long long));
	} 
	if(frmt == 'u')
		a += ft_printunsigned(va_arg(*l, unsigned int));
	if(frmt == 'x' || frmt == 'X')
		a += ft_printhxa(va_arg(*l, unsigned int), frmt);
	return(a);
}

int ft_printf(const char *str, ...)
{
    va_list a_list;
    int i;
    int a;
	va_list *alist;
	
	alist = &a_list;
	a = 0;
    i = 0;
    va_start(a_list, str);
    while(str[i])
    {
        if(str[i] == '%' && str[++i])
		{	
            a += process(alist, str[i++]);
		}
        else
        {
            a += ft_printputchar(str[i++]);
        }        
    }
		va_end(a_list); 
    return(a);
}

// int main()
//   {
// 	char *a;
// 	char *b;

// 	b = malloc(34);
// 	a = malloc(100);
	// printf("%d\n", printf("char:\n%c\n%c\n%c\n", '0', 0, '1'));
	// printf("%d\n", ft_printf("char:\n%c\n%c\n%c\n", 'y', 'f', '1'));
 	//printf("----------\n");
	// printf("%d\n", printf("string:\nNULL%sNULL\n", NULL));
  	// printf("%d\n", ft_printf("string:\nNULL%sNULL\n", NULL));
// 	printf("----------\n");
// 	printf("%d\n", printf("yüzde:\n%%\n"));
// 	printf("%d\n", ft_printf("yüzde:\n%%\n"));
// 	printf("----------\n");
 	// printf("%d\n", printf("intager:\n%d\n", -2147483648));
 	// printf("%d\n", ft_printf("intager:\n%d\n", -2147483648));
// 	printf("----------\n");
// 	printf("%d\n", ft_printf("pointer:\n%p\n", a));
// 	printf("%d\n", printf("pointer:\n%p\n", a));
// 	printf("----------\n");
// 	printf("%d\n", ft_printf("intageri:\n%i\n",4834));
// 	printf("%d\n", printf("intageri:\n%i\n", 4834));
// 	printf("----------\n");
// 	printf("%d\n", ft_printf("unsigned:\n%u\n", 214748367));
// 	printf("%d\n", printf("unsigned:\n%u\n", 214748367));
// 	printf("----------\n");
// 	printf("%d\n", ft_printf("hexa:\n%x\n", 2147483));
// 	printf("%d\n", printf("hexa:\n%x\n", 2147483));
// 	printf("----------\n");
// 	printf("%d\n", ft_printf("HEXA:\n%X\n", 4758));
// 	printf("%d\n", printf("HEXA:\n%X\n", 4758));
	
// }