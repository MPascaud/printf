/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:40:03 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/15 19:31:42 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned long long	ft_cast(va_list args, t_variables *variables, unsigned long long tmp)
{
//	unsigned long long	tmp;

	if (variables->modificateur == 'H')
		tmp = (unsigned char)va_arg(args, int);
	if (variables->modificateur == 'h')
		tmp = (short int)va_arg(args, int);
	if (variables->modificateur == 'l')
		tmp = va_arg(args, long int);
	if (variables->modificateur == 'L')
		tmp = va_arg(args, long long int);
	if (variables->modificateur == 'j')
		tmp = va_arg(args, intmax_t);
	if (variables->modificateur == 'z')
		tmp = va_arg(args, size_t);
	return (tmp);
}
