/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 23:30:15 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/19 19:45:23 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"



#include <locale.h>



/*int		main(void)
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

//	setlocale(LC_ALL, NULL);
//	printf("%d\n", MB_CUR_MAX);
	//	wchar_t c;
	//	c = L'130';
	//	printf("coucou %C \n", '130');

	//	ft_printf("%.15d\n", 123456789);
	//	printf("%.15d\n", 123456789);
	//	printf("% +089d", 55555555);
	//	printf("%1.6d", 1234);
	return (0);
}
*/
int main()
{
//	setlocale(LC_ALL, "");
//	wprintf(L"ο Δικαιοπολις εν αγρω εστιν\n");  // wide output
//	freopen(NULL, "w", stdout);                 // lets me switch
//	printf("ο Δικαιοπολις εν αγρω εστιν\n");    // byte output
//	printf("%C \n", 0x130);
//	printf("pr%300c\n ", 0x300);
//	ft_printf("ft%300cvsvg%%sts %.56d\n%%\n", 0x300, 45);
//	wchar_t *str = L"ჩ";
//	printf("%50S", str);
//	printf("%-30S", L"ჩ");
	printf("%-8.7s%%%25.4d\n", "egestg", 1235);
	ft_printf("%-8.7s%%%25.4d\n", "egestg", 1235);
//	ft_printf("%4.3s\n", "gtr");
//	printf("%4.3s\n", "gtr");
	return (0);
}

















