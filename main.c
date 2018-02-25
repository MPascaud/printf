/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 23:30:15 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/25 20:59:04 by mpascaud         ###   ########.fr       */
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
	int		retour;

	retour = 0;
	setlocale(LC_ALL, "");
//	wprintf(L"ο Δικαιοπολις εν αγρω εστιν\n");  // wide output
//	freopen(NULL, "w", stdout);                 // lets me switch
//	printf("ο Δικαιοπολις εν αγρω εστιν\n");    // byte output
//	printf("%C \n", 0x130);
//	printf("pr%300c\n ", 0x300);
//	ft_printf("ft%300cvsvg%%sts %.56d\n%%\n", 0x300, 45);
//	wchar_t *str = L"ჩ";
//	printf("%50S", str);
//	printf("%-30S", L"ჩ");
//	printf("%-8.7s%%%25.4d\n", "egestg", 1235);
//	ft_printf("%-8.7s%%%25.4d\n", "egestg", 1235);
//	ft_printf("%4.3s\n", "gtr");
//	printf("%4.3s\n", "gtr");
//	   printf("pr%%%-+7.3d1200%s\n", 1234, "1234");
//	printf("retour = %d\n", retour);
//	ft_printf("ft%%%-+7.3d1200%s\n", 1234, "1234");
/*	ft_printf("ft avec%%%-+7.3d1200%s\n", 7894,  "1234");
	printf("pr avec%%%-+7.3d1200%s\n", 7894,  "1234");
	ft_printf("ft sans%%%-+7d1200%s\n", 7894,  "1234");
	printf("pr sans%%%-+7d1200%s\n", 7894,  "1234");*/
//	ft_printf("ft%s\n", L"qwertyuiop");
//	printf("pr%s\n", L"qwertyuiop");
//	retour = ft_printf("ft%.0s\n", L"dfvdfbv1 ☂ 2 € 3 ☯ 4 ∞ 5 ❤");
//	printf("%d\n", retour);
//	retour = printf("pr%.0s\n", L"dfvdfbv1 ☂ 2 € 3 ☯ 4 ∞ 5 ❤");
//	printf("%d\n", retour);
//	retour = ft_printf("ft%S\n", L"dfvdfbv1 ☂ 2 € 3 ☯ 4 ∞ 5 ❤");
//	printf("%d\n", retour);
//	retour = printf("pr%S\n", L"dfvdfbv1 ☂ 2 € 3 ☯ 4 ∞ 5 ❤");
//	printf("%d\n", retour);
//	ft_printf("blabla%10c%d\n", 'a', 120);//<<<<<<<<<<<<-----------
//	printf("blabla%10c%d\n", 'a', 120);//<<<<<<<<<<<<-----------
//	retour = ft_printf("ft%S\n", L"dfvdfbv");
//	printf("%d\n", retour);
	/*retour = printf("pr%10S\n", L"dfvdfbv1 ☂ 2 € 3 ☯ 4 ∞ 5 ❤ 6 ♫");
	ft_printf("%d\n", retour);
	retour = ft_printf("ft%10S\n", L"dfvdfbv1 ☂ 2 € 3 ☯ 4 ∞ 5 ❤ 6 ♫");
	ft_printf("%d\n", retour);*/
/*	printf("pr%llD\n", -1000000000000000000000000000);
    printf("pr%lD\n", -1000000000000000000000000000);
	printf("pr%D\n", -1000000000000000000000000000);
	printf("pr%llD\n", -1000);
	printf("pr%lD\n", -1000);
	printf("pr%D\n", -1000);*/
//	printf("pr%lld\n", -1000000000000000);
//  printf("pr%ld\n", -1000000000000000);
//	printf("pr%d\n", -1000000000000000);
//	printf("pr%lld\n", -1000);
//	printf("pr%ld\n", -1000);
//	printf("pr%d\n", -1000);
//	ft_printf("ft%hhD\n", -1000000000000000);
//	ft_printf("pr%hhD\n", -1000);
//  ft_printf("ft%lD\n", -1000000000000000);
//	ft_printf("ft%D\n", -1000000000000000);
//	ft_printf("ft%llD\n", -1000);
//	ft_printf("ft%lD\n", -1000);
//	ft_printf("ft%D\n", -1000);
//	ft_printf("ft%lld\n", -1000000000000000);
//  ft_printf("ft%ld\n", -1000000000000000);
//	ft_printf("ft%d\n", -1000000000000000);
//	ft_printf("ft%lld\n", -1000);
//	ft_printf("ft%ld\n", -1000);
//	ft_printf("ft%d\n", -1000);
//	printf("pr%hhD\n", -1000000000000000);
//	printf("pr%hhD\n", -1000);
//	ft_printf("ft%llD\n", -100000000000000000000000);
//	printf("pr%c\n", 0x170);
//	ft_printf("ft%c\n", 0x170);
//	printf("pr%lc\n", 0x170);
//	ft_printf("ft%lc\n", 0x170);
//	printf("pr%C\n", 0x170);
//	ft_printf("ft%C\n", 0x170);
/*	printf("pr%C\n", 0x170);
	ft_printf("ft%C\n", 0x170);
	printf("pr%lC\n", 0x170);
	ft_printf("ft%lC\n", 0x170);
	printf("pr%c\n", L'0x170');
	ft_printf("ft%c\n", L'0x170');
	printf("pr%lc\n", L'0x170');
	ft_printf("ft%lc\n", L'0x170');
	printf("pr%C\n", L'0x170');
	ft_printf("ft%C\n", L'0x170');
	printf("pr%lC\n", L'0x170');
	ft_printf("ft%lC\n", L'0x170');*/
/*   retour = printf("pr1%# -32o\n", -11000);
   printf("retour = %d\n", retour);
retour =ft_printf("ft1%# -32o\n", -11000);
   printf("retour = %d\n", retour);*/
 /* retour = printf("pr1%# -32o\n", 11000);
   printf("retour = %d\n", retour);
retour = ft_printf("ft1%# -32o\n", 11000);
   printf("retour = %d\n", retour);*/
/*   retour = printf("pr2%#0o\n", -1100000000000);
   printf("retour = %d\n", retour);
  retour = ft_printf("ft2%#0o\n", -1100000000000);
   printf("retour = %d\n", retour);*/
 /*    printf("pr3%lo\n", -11000500000000000000);
   ft_printf("ft3%lo\n", -11000500000000000000);
      printf("pr3%lo\n", -2147483648);
   ft_printf("ft3%lo\n", -2147483648);
     printf("pr3%lo\n", -11000500);
  ft_printf("ft3%lo\n", -11000500);
   printf("pr%lo\n",110);
 ft_printf("ft%lo\n", 110);*/
   /*  printf("pr%-52.9lu\n", -11000000000000);
   ft_printf("ft%-52.9lu\n", -11000000000000);
      printf("pr%-52.9lu\n", 11000000000000);
   ft_printf("ft%-52.9lu\n", 11000000000000);
      printf("pr%#-52.9lo\n", -11000000000000);
   ft_printf("ft%#-52.9lo\n", -11000000000000);
      printf("pr%#-52.9lo\n", 11000000000000);
   ft_printf("ft%#-52.9lo\n", 11000000000000);*/
   //  printf("pr%-52.9x\n", -11000000000000);
 //  ft_printf("ft%-52.9x\n", -11000000000000);
//      printf("pr%-52.9x\n", -1100);
//   ft_printf("ft%-52.9x\n", -1100);
//      printf("pr%-52.9x\n", 1100);
//   ft_printf("ft%-52.9x\n", 1100);
  //    printf("pr%-52.9x\n", 11000000000000);
 //  ft_printf("ft%-52.9x\n", 11000000000000);
 /*     printf("pr%#52.9x\n", -11000000000000);
   ft_printf("ft%#52.9x\n", -11000000000000);
      printf("pr%#52.9x\n", -1100);
   ft_printf("ft%#52.9x\n", -1100);
      printf("pr%#52.9x\n", 1100);
   ft_printf("ft%#52.9x\n", 1100);
      printf("pr%#52.9x\n", 11000000000000);
   ft_printf("ft%#52.9x\n", 11000000000000);
      printf("pr%-52.9X\n", -11000000000000);
   ft_printf("ft%-52.9X\n", -11000000000000);
      printf("pr%-52.9X\n", 11000000000000);
   ft_printf("ft%-52.9X\n", 11000000000000);*/
 //  printf("pr%#052.9lu\n", 110);
 // ft_printf("ft%#052.9lu\n", 110);
  /*  printf("pr%50.3d\n", 50000000000000);
 ft_printf("ft%50.3d\n", 50000000000000);
    printf("pr%50.3d\n", 5000000);
 ft_printf("ft%50.3d\n", 5000000);*/
/*      printf("pr%#-50.5o\n", -100);
   ft_printf("ft%#-50.5o\n", -100);
      printf("pr%#-50.5o\n", 110);
   ft_printf("ft%#-50.5o\n", 110);
    printf("pr%#-50.5o\n", 11000);
 ft_printf("ft%#-50.5o\n", 11000);
      printf("pr%#50.5o\n", -100);
   ft_printf("ft%#50.5o\n", -100);
      printf("pr%#50.5o\n", 110);
   ft_printf("ft%#50.5o\n", 110);
    printf("pr%#50.5o\n", 11000);
 ft_printf("ft%#50.5o\n", 11000);*/
   /*   printf("pr% 50.5ld\n", -100);
   ft_printf("ft% 50.5ld\n", -100);
      printf("pr% 50.5ld\n", 110);
   ft_printf("ft% 50.5ld\n", 110);
    printf("pr% 50.5ld\n", 11000000000000000);
 ft_printf("ft% 50.5ld\n", 11000000000000000);*/
//----------------------------
/*	    printf("pr%.30lX\n", -100000000000);
     ft_printf("ft%.30lX\n", -100000000000);
      printf("pr%.30lX\n", 110000000000);
   ft_printf("ft%.30lX\n", 110000000000);
    printf("pr%.30lX\n", 11000000000000000);
 ft_printf("ft%.30lX\n", 11000000000000000);
      printf("pr%#-.30lX\n", -100000000000000);
   ft_printf("ft%#-.30lX\n", -100000000000000);
      printf("pr%#-.30lX\n", 110000000000000);
   ft_printf("ft%#-.30lX\n", 110000000000000);
    printf("pr%#-.30lX\n", 110000000000);
 ft_printf("ft%#-.30lX\n", 110000000000);*/

//	printf("retour = %d\n", retour);
	ft_printf("ft%lld\n", -9223372036854775808);
	ft_printf("%d\n", -546);
	printf("pr%lld\n", -9223372036854775808);
//	ft_printf("retour = %d\n", retour);
	return (0);
}






