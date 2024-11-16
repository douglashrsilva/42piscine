/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duasilva <duasilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:07:26 by duasilva          #+#    #+#             */
/*   Updated: 2024/09/08 11:46:20 by duasilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char a);

void	print_line(int x, int y, int len, int len2)
{
	if (len2 == 1)
		ft_putchar('A');
	else if (len2 == y)
		ft_putchar('C');
	while (len < x -1)
	{
		ft_putchar('B');
		len ++;
	}
	if (x > 1)
	{
		if (len2 == 1)
			ft_putchar('C');
		else if (len2 == y)
			ft_putchar('A');
	}
	ft_putchar('\n');
}

void	print_mid_col(int x, int y, int len, int len2)
{
	while (len2 < y -1)
	{
		if (y > 1)
		{
			ft_putchar('B');
			while (len < x -1)
			{
				ft_putchar(' ');
				len ++;
			}
			if (x > 1)
				ft_putchar('B');
			ft_putchar('\n');
		}
		len2++;
		len = 1;
	}
}

void	rush(int x, int y)
{
	int	len;
	int	len2;

	len = 1;
	len2 = 1;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	else
	{
		print_line(x, y, len, len2);
		print_mid_col(x, y, len, len2);
		if (y > 1)
		{
			len2 = y;
			print_line(x, y, len, len2);
		}
	}
}
