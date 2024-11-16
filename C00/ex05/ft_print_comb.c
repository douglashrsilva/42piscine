/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:54:26 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/12 14:11:58 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_insertchar(char c);
void	ft_insertcomma(void);
void	ft_whiles(int i, int ii, int iii);
void	ft_print_comb(void);

void	ft_insertchar(char c)
{
	write (1, &c, 1);
}

void	ft_insertcomma(void)
{
	ft_insertchar(',');
	ft_insertchar(' ');
}

void	ft_whiles(int i, int ii, int iii)
{
	while (i <= '7')
	{
		ii = i + 1;
		while (ii <= '8')
		{
			iii = ii +1;
			while (iii <= '9')
			{
				ft_insertchar(i);
				ft_insertchar(ii);
				ft_insertchar(iii);
				if (i != '7')
				{
					ft_insertcomma();
				}
				iii++;
			}
			ii++;
		}
		i++;
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	ii;
	int	iii;

	i = '0';
	ii = i + 1;
	iii = ii +1;
	ft_whiles(i, ii, iii);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
