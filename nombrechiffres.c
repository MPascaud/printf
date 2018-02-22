/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/22 21:51:47 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

int		nombrechiffres(unsigned long long nb, t_variables *variables)
{
	int		result;
	int		tmp;
//	unsigned long long tmp;	
	int		base;

	if (variables->specificateur == 'd' || variables->specificateur == 'i' || variables->specificateur == 'D' || variables->specificateur == 'u')
		base = 10;
	if (variables->specificateur == 'o' || variables->specificateur == 'O')
		base = 8;
	if (variables->specificateur == 'x' || variables->specificateur == 'X')
		base = 16;
	result = 1;
	tmp = (int)nb;
//	tmp = nb;	
	if (nb == 0)
		return (1);
/*	while (tmp != 0)
	{
		tmp /= base;
		result++;
	}*/
	while (nb >= base)
	{
		nb /= base;
		result++;
	}
	/*while (tmp >= base)
	{
		tmp /= base;
		result++;
	}*/
	if ((variables->specificateur == 'o' || variables->specificateur == 'O') && variables->diese == 1)
		result++;
	return (result);
}


