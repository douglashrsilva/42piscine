/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:52:18 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/14 20:20:45 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	ii;

	i = 0;
	while (i < size - 1)
	{
		ii = 0;
		while (ii < size - 1 - i)
		{
			if (tab[ii] > tab[ii + 1])
			{
				temp = tab[ii];
				tab[ii] = tab[ii + 1];
				tab[ii + 1] = temp;
			}
			ii++;
		}
		i++;
	}
}

/*int	main(void)
{
	int x[] = {8, 3, 9, 5, 1, 1};
	int y = 6;
	int i = 0;

	ft_sort_int_tab(x, y);
	while(i < y)
	{
		printf("%d", x[i]);
		i++;
	}
	printf("\n");
	return(0);
}*/
