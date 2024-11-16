/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:46:44 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/17 16:56:10 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	ii;

	i = 0;
	ii = 0;
	while (dest[ii] != '\0')
	{
		ii++;
	}
	while (nb > i && src[i] != '\0')
	{
		dest[ii] = src[i];
		ii++;
		i++;
	}
	dest[ii] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[50] = "Casa de gato";
	char	src[] = " amarela com laranja";
	int	nb = 8;

	printf("%s \n", ft_strncat(dest, src, nb));
	return (0);
}*/
