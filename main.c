/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 23:30:15 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/16 19:59:10 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"








int		main(void)
{
//	ft_printf("%5.6d\n", -456);
//	printf("%5.6d\n", -456);
	ft_printf("ft / positif / padplus :%4.5d\n", 1234);
	ft_printf("ft / neg / pad :%4.5d\n", -1234);
	ft_printf("ft / pos / plus :%+4.5d\n", 1234);
	printf("print / positif / padplus :%4.5d\n", 1234);
	printf("print / neg / pad :%4.5d\n", -1234);
	printf("print / pos / plus :%+4.5d\n", 1234);
//	ft_printf("%.15d\n", 123456789);
//	printf("%.15d\n", 123456789);
//	printf("% +089d", 55555555);
//	printf("%1.6d", 1234);
	return (0);
}
