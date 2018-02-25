/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/25 17:28:17 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"




int		ft_unsigned_hexa(va_list args, t_variables *variables)
{
	uintmax_t	tmp;
	int			nbchiffres;
	int			i;
	int			j;
	int			ret;

	i = 0;
	j = 0;
	ret = 0;
	ft_unsigned_cast(args, variables, &tmp);
	nbchiffres = nombrechiffres(tmp, variables);
//	printf("nbchiffres = %d\n", nbchiffres);
	if (variables->moins == 0)
	{
		if (variables->diese == 1)
			i = 2;
		j = i;
		while (((i < variables->gabarit - variables->precision) && (i < variables->gabarit - nbchiffres) && i < variables->precision + j) || ((i + nbchiffres) < variables->gabarit && variables->zero == 0 && (i + variables->precision) < variables->gabarit))
		{
			write(1, " ", 1);
			ret++;
			i++;
		}
		j = i;
		i = 0;
		if (variables->diese == 1)
			write(1, "0x", 2);
		while (((i < variables->precision - nbchiffres) || (j + i + nbchiffres) < variables->gabarit))
		{
			write(1, "0", 1);
			ret++;
			i++;
		}
		ft_unsigned_putnbr(tmp, variables, nbchiffres, 0);
		ret+= nbchiffres;
	}
	if (variables->moins == 1)
	{
		if (variables->diese == 1 && variables->specificateur == 'x')
			write(1, "0x", 2);
		if (variables->diese == 1 && variables->specificateur == 'X')
			write(1, "0X", 2);
		j = i;
		printf("precison = %d, nbchiffres = %d, i = %d\n", variables->precision, nbchiffres, i);
		while (i < (variables->precision - nbchiffres))
		{
			write(1, "0", 1);
			ret++;
			i++;
		}
		ft_unsigned_putnbr(tmp, variables, nbchiffres, 0);
		ret += nbchiffres;
		i += nbchiffres;
		if (variables->diese == 1)
			i += 2;
		while (i < variables->gabarit)
		{
			write(1, " ", 1);
			ret++;
			i++;
		}
	}
	return (ret);
}







int		ft_argument(va_list args, t_variables *variables)
{
	int		tmp;
	int		ret;

	ret = 0;
	if (variables->specificateur == 'd' || variables->specificateur == 'i' || variables->specificateur == 'D')
		ret = ft_decimal(args, variables);
	if (variables->specificateur == 'c' && variables->modificateur != 'l')
		ret = ft_character(args, variables);
	if (variables->specificateur == 's' && variables->modificateur != 'l')
		ret = ft_string(args, variables);
	if (variables->specificateur == 'C' || (variables->specificateur == 'c' && variables->modificateur == 'l'))
		ret = ft_unicharacter(args, variables);
	if (variables->specificateur == 'S' || (variables->specificateur == 's' && variables->modificateur == 'l'))
		ret = ft_unistring(args, variables);
	if (variables->specificateur == 'o' || variables->specificateur == 'O' || variables->specificateur == 'u' || variables->specificateur == 'U')
		ret = ft_unsigned(args, variables);
	if (variables->specificateur == 'x' || variables->specificateur == 'X')
		ret = ft_unsigned_hexa(args, variables);
	return (ret);
}












