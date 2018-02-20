/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/20 19:08:40 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"




int		ft_argument(va_list args, t_variables *variables)
{
	int		tmp;
	int		ret;

	ret = 0;
	if (variables->specificateur == 'd' || variables->specificateur == 'i')
		ret = ft_decimal(args, variables);
	if (variables->specificateur == 'c')
		ret = ft_character(args, variables);
	if (variables->specificateur == 's')
		ret = ft_string(args, variables);
	if (variables->specificateur == 'C')
		ret = ft_unicharacter(args, variables);
	return (ret);
}












