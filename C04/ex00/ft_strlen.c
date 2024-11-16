/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:58:10 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/18 14:09:35 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = 0;
	while (str[i] != '\0')
	{
		i++;
		str_len++;
	}
	return (str_len);
}

/*int	main(void)
{
	printf("%u\n", ft_strlen("Text"));
	return (0);
}*/
