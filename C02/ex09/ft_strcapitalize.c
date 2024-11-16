/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:40:14 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/16 21:16:18 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			x = 1;
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			x = 1;
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			x = 1;
		else
			x = 0;
		if (str[i] >= 'A' && str[i] <= 'Z' && x == 1)
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && x == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[19] = "   OLA,  tudo bem?";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
