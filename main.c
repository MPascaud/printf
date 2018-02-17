/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 23:30:15 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/17 03:40:47 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"



#include <locale.h>



int		main(void)
{
//	ft_printf("%5.6d\n", -456);
//	printf("%5.6d\n", -456);
	ft_printf("ft / positif / padplus :%13.7d\n", 12345);
	ft_printf("ft / neg / pad :%9.7d\n", -12345);
	ft_printf("ft / pos / plus :%+9.7d\n", 12345);
	ft_printf("ft / +07 :%+09d\n", 12345);
	printf("print / positif / padplus :%13.7d\n", 12345);
	printf("print / neg / pad :%9.7d\n", -12345);
	printf("print / pos / plus :%+9.7d\n", 12345);
	printf("print / +07 :%+09d\n", 12345);
//	printf("signed char %d\nunsigned char %d\nshort %d\nunsigned short %d\nint %d\nunsigned int %d\nlong %d\nunsigned long %d\nlong long %d\nunsigned long long%d\nint_max %d\nsize_t %d\n", sizeof(signed char), sizeof(unsigned char), sizeof(short), sizeof(unsigned short), sizeof(int), sizeof(unsigned int), sizeof(long), sizeof(unsigned long), sizeof(long long), sizeof(unsigned long long), sizeof(intmax_t), sizeof(size_t));
	setlocale(LC_ALL, NULL);
	printf("%d\n", MB_CUR_MAX);
	wchar_t c;
	c = L'130';
	printf("coucou %C \n", '130');
//	ft_printf("%.15d\n", 123456789);
//	printf("%.15d\n", 123456789);
//	printf("% +089d", 55555555);
//	printf("%1.6d", 1234);
	return (0);
}
