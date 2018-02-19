/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/19 14:48:47 by mpascaud         ###   ########.fr       */
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


