/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:12:03 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/18 14:17:47 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int nb)
{
	char	digits[12];
	int		i;

	i = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	while (nb != 0)
	{
		digits[i++] = '0' + (nb % 10);
		nb = nb / 10;
	}
	while (i > 0)
	{
		write (1, &digits[i - 1], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write (1, "0", 1);
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
		ft_print_int(nb);
}

/*int	main(void)
{
	ft_putnbr(42);
	return (0);
}*/
