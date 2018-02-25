/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/25 17:48:48 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"







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












