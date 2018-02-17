/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/17 01:01:27 by mpascaud         ###   ########.fr       */
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
   	intmax_t				tmp;
	int					nbchiffres;
	int					i;
	int					j;

	cast = 0;
	i = 0;
	j = 0;
//	tmp = va_arg(args, long int);
//	printf("1--->%lld\n", tmp);
	if (variables->modificateur != 'a')
	{
		ft_cast(args, variables, &tmp);
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
		if ((variables->espace == 1 || variables->plus == 1) && tmp >= 0)
			i++;
		if (tmp < 0)
			i++;
		j = i;
		while ((i < variables->gabarit - variables->precision) && (i < variables->gabarit - nbchiffres) && i < variables->precision + j)
		{
			write(1, " ", 1);
			i++;
		}
		if (variables->plus == 1 && tmp >= 0)
			write(1, "+", 1);
		if (variables->espace == 1 && variables->plus == 0 && tmp >= 0)
			write(1, " ", 1);
		if (tmp < 0)
		{
			write(1, "-", 1);
			tmp = -tmp;
		}
		printf("i = %d\n", i);
		j = i;
		i = 0;
		printf("i, j, nbchiffres, gabarit: %d / %d /%d / %d\n", i, j, nbchiffres, variables->gabarit);
		while ((i < variables->precision - nbchiffres) || (j + i + nbchiffres) < variables->gabarit /*&& (i < variables->gabarit - nbchiffres)*/)
		{
			write(1, "0", 1);
			i++;
		}
		ft_putnbr(tmp);

	}
	if (variables->moins == 1)
	{
		if (variables->plus == 1 && tmp >= 0)
		{
			write(1, "+", 1);
		}
		if (variables->espace == 1 && variables->plus == 0 && tmp >= 0)
		{
			write(1, " ", 1);
		}
		if ((variables->espace == 1 || variables->plus == 1) && tmp >= 0)
			i++;
		if (variables->plus == 0 && tmp >= 0)
			i++;
		if (tmp < 0)
		{
			write(1, "-", 1);
			tmp = -tmp;
			j++;
			i++;
		}
		while (i <= (variables->precision - nbchiffres))
		{
			write(1, "0", 1);
			i++;
		}
		ft_putnbr(tmp);
		i += nbchiffres;
		printf("i = %d\n", i);
		if (variables->plus == 0 && j == 0)
			i--;
		while (i < variables->gabarit)
		{
			write(1, " ", 1);
			i++;
		}
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












