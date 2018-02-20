/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:25:52 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/20 18:59:57 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"




int		ft_size_four(wchar_t c)
{
	char	str[4];
	int		i;

	i = 0;
	str[0] = (c >> 18 & 0b111) + 0xf0;
	str[1] = (c >> 12 & 0b111111) + 0x80;
	str[2] = (c >> 6 & 0b111111) + 0x80;
	str[3] = (c & 0b111111) + 0x80;
	while (i <= 3)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (4);
}


int		ft_size_three(wchar_t c)
{
	char	str[3];
	int		i;

	i = 0;
	str[0] = (c >> 12 & 0b1111) + 0xe0;
	str[1] = (c >> 6 & 0b111111) + 0x80;
	str[2] = (c & 0b111111) + 0x80;
	while (i <= 2)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (3);
}


int		ft_size_two(wchar_t c)
{
	char	str[2];
	int		i;

	i = 0;
	str[0] = (c >> 6 & 0b11111) + 0xc0; 
	str[1] = (c & 0b111111) + 0x80;
	while (i <= 1)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (2);
}


int		ft_unicharacter(va_list args, t_variables *variables)
{
	int			ret;
	wchar_t		tmp;
	int			size;

	ret = 0;
	tmp = va_arg(args, wchar_t);
	if (tmp <= 127)
	{
		ft_putchar(tmp);
		return (1);
	}
	if (tmp >= 128 && tmp <= 2047)
		ret = ft_size_two(tmp);
	if (tmp >= 2048 && tmp <= 65535)
		ret = ft_size_three(tmp);
	if (tmp >= 65536)
		ret = ft_size_four(tmp);
	return (ret);
}



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












