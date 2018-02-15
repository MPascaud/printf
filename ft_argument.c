/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/15 23:11:21 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

int		nombrechiffres(unsigned long long nb)
{
	int		result;
	int		tmp;

	result = 0;
	tmp = (int)nb;
	if (nb == 0)
		return (1);
	while (tmp != 0)
	{
		tmp /= 10;
		result++;
	}
	return (result);
}

/*
**
*/

void	ft_decimal(va_list args, t_variables *variables)
{
	int					cast;
   	long long			tmp;
	int					nbchiffres;
	int					i;
	int					j;

	cast = 0;
	i = 0;
	j = 0;
//	printf("1--->%lld\n", tmp);
	if (variables->modificateur != 'a')
	{
		tmp = ft_cast(args, variables, tmp);
		cast = 1;
	}
	else
	{
		tmp = va_arg(args, int);
	}
//	printf("2--->%lld\n", tmp);
	nbchiffres = nombrechiffres(tmp);
//	printf("nbchiffres = %d\n", nbchiffres);
	if (variables->moins == 0)
	{
		if (variables->espace == 1 || variables->plus == 1)
			i++;
		while ((i < variables->gabarit - variables->precision) && (i < variables->gabarit - nbchiffres))
		{
			write(1, " ", 1);
			i++;
		}
		if (variables->plus == 1 && tmp >= 0)
		{
			write(1, "+", 1);
		//	i++;
		}
		if (variables->espace == 1 && variables->plus == 0 && tmp >= 0)
		{
			write(1, " ", 1);
		//	i++;
		}
		printf("i = %d\n", i);
		i = 0;
		while (i < variables->precision - nbchiffres)
		{
			write(1, "0", 1);
			i++;
		}
		ft_putnbr(tmp);
	}
	

}

void	ft_argument(va_list args, t_variables *variables)
{
	int		tmp;

	if (variables->specificateur == 'd' || variables->specificateur == 'D' || variables->specificateur == 'i')
	{
		ft_decimal(args, variables);
	}
}












