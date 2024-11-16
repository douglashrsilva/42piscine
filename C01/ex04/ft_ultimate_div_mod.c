/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:05:51 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/14 15:13:29 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;
	int	div;
	int	mod;

	temp1 = *a;
	temp2 = *b;
	div = temp1 / temp2;
	*a = div;
	mod = temp1 % temp2;
	*b = mod;
}
/*int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 5;
	printf("X = %d, Y = %d \n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("X = %d, Y = %d \n", x, y);
	return (0);
}*/
