/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:03:13 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/12 23:04:26 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main (void)
{
	int x = 0;
	int y = 1;
	printf("x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);
	return (0);
}*/
