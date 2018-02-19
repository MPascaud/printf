/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/19 19:51:04 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"





void	ft_argument(va_list args, t_variables *variables)
{
	int		tmp;

	if (variables->specificateur == 'd' || variables->specificateur == 'i')
		ft_decimal(args, variables);
	if (variables->specificateur == 'c')
		ft_character(args, variables);
	if (variables->specificateur == 's')
		ft_string(args, variables);

}












