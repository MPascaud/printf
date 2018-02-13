/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   afficherbinaire.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 16:59:12 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/26 17:24:44 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	achage_binaire(unsigned int n)
{
	int		i;

	i = 31;
	printf("%d en binaire : ", n);
	while (i >= 0)
	{
		printf("%d", (n >> i) & 1);
		i--;
	}
	printf("\n");
}

int		main(void)
{
	int		nb;

	nb = 13;
	achage_binaire(nb);
	return (0);
}
