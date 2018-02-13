/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 16:03:47 by mpascaud          #+#    #+#             */
/*   Updated: 2018/02/13 17:12:47 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"
#include <wchar.h>


int		ft_printf(char *blabla, ...)
{
//	va_list			args;
	t_variables		*variables;
	int				i;
	int				modulo;
	char			*gabarit_str;
	char			*precision_str;
	int				j;

	i = 0;
	j = 0;
	modulo = 0;
	variables = (t_variables*)malloc(sizeof(t_variables));
	variables->diese = 0;
	variables->espace = 0;
	variables->zero = 0;
	variables->moins = 0;
	variables->plus = 0;
	variables->gabarit = 0;
	variables->precision = 0;
	variables->modificateur = 'a';
//	va_start (args, blabla);
	while (blabla[i])
	{
		while (blabla[i] != '%' && blabla[i])
		{
			ft_putchar(blabla[i]);
			i++;
		}
		if (blabla[i] == '%')
		{
			modulo = 1;
			if (blabla[i + 1] == '%')
			{
				i++;
				write(1, "%", 1);
				modulo = 0;
			}
			if (modulo == 1)
			{
				i++;
				while (blabla[i] == '#' || blabla[i] == ' ' || blabla[i] == '0' || blabla[i] == '-' || blabla[i] == '+')
				{
				//	printf("coucou");
					if (blabla[i] == '#')
						variables->diese = 1;
					if (blabla[i] == ' ')
						variables->espace = 1;
					if (blabla[i] == '0')
						variables->zero = 1;
					if (blabla[i] == '-')
						variables->moins = 1;
					if (blabla[i] == '+')
						variables->plus = 1;
					i++;
				}
				if (blabla[i] >= '0' && blabla[i] <= '9')
				{
					j = i;
					while (blabla[j] >= '0' && blabla[j] <= '9')
					{
					//	gabarit_str[j] = blabla[i];
						j++;
					//	i++;
					}
					gabarit_str = (char*)malloc(sizeof(char) * (j + 1));
					j = 0;
					while (blabla[i] >= '0' && blabla[i] <= '9')
					{
						gabarit_str[j] = blabla[i];
						j++;
						i++;
					}
					gabarit_str[j] = '\0';
					variables->gabarit = ft_atoi(gabarit_str);
					free(gabarit_str);
			//		i--;
			//		printf("apres le i-- : blabla[i] = '%c'\n", blabla[i]);
				}
				if (blabla[i] == '.')
				{
					i++;
					j = i;
					while (blabla[j] >= '0' && blabla[j] <= '9')
						j++;
					precision_str = (char*)malloc(sizeof(char) * (j + 1));
					j = 0;
					while (blabla[i] >= '0' && blabla[i] <= '9')
					{
						precision_str[j] = blabla[i];
						j++;
						i++;
					}
					precision_str[j] = '\0';
					variables->precision = ft_atoi(precision_str);
					free(precision_str);
				//	i--;
				}
				if (blabla[i] == 'h' || blabla[i] == 'l' || blabla[i] == 'j' || blabla[i] == 'z')
				{
					variables->modificateur = blabla[i];
					i++;
					if (blabla[i] == 'h' || blabla[i] == 'l')
					{
						variables->modificateur -= 32;
						i++;
					}
				}
				variables->specificateur = blabla[i];
		//		i--;
				modulo = 0;
			}
			
		}
		i++;
//		printf("coucou");
	}

	printf("\nvariables->diese = %d\n", variables->diese);
	printf("variables->espace = %d\n", variables->espace);
	printf("variables->zero = %d\n", variables->zero);
	printf("variables->moins = %d\n", variables->moins);
	printf("variables->plus = %d\n", variables->plus);
	printf("variables->gabarit = %d\n", variables->gabarit);
	printf("variables->precision = %d\n", variables->precision);
	printf("variables->modificateur = %c\n", variables->modificateur);
	printf("variables->specificateur = %c\n", variables->specificateur);
	return (0);
}


int		main(void)
{
//	int		jesuisunint;

//	jesuisunint = 18;
/*	wchar_t texte[50] = L"\x82";
	wprintf("%ls", texte);*/
//	printf("%5.2f.", 2.7182);

	ft_printf("%%%5.2fdgs%%", 2.7182);
	return (0);
}
