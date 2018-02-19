/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:13:55 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/19 16:36:42 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libftprintf.h"



void    ft_character(va_list args, t_variables *variables)
{
	intmax_t    tmp;
	int         i;

	i = 1;
	if (variables->modificateur != 'a')
		ft_cast(args, variables, &tmp);
	else
		tmp = va_arg(args, int);
	if (variables->moins == 0)
	{
		while (i < variables->gabarit)
		{
			write(1, " ", 1);
			i++;
		}
		ft_putchar(tmp);
	}
	if (variables->moins == 1)
	{
		ft_putchar(tmp);
		while (i < variables->gabarit)
		{
			write(1, " ", 1);
			i++;
		}
	}

}


