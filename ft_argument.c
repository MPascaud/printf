/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/15 20:03:53 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

int		nombrechiffres(void *nb)
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


void	ft_decimal(va_list args, t_variables *variables)
{
	int					cast;
	unsigned long long	tmp;
	int					nbchiffres;

	cast = 0;
	printf("1--->%lld\n", tmp);
	if (variables->modificateur != 'a')
	{
		tmp = ft_cast(args, variables, tmp);
		cast = 1;
	}
	else
	{
		tmp = va_arg(args, int);
	}
	printf("2--->%lld", tmp);
//	nbchiffres = nombreschiffres(tmp);
}

void	ft_argument(va_list args, t_variables *variables)
{
	int		tmp;

	if (variables->specificateur == 'd' || variables->specificateur == 'D' || variables->specificateur == 'i')
	{
		ft_decimal(args, variables);
	}
}












