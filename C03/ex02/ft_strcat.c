/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:11:39 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/17 16:42:45 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	while (dest[ii] != '\0')
	{
		ii++;
	}
	while (src[i] != '\0')
	{
		dest[ii] = src[i];
		i++;
		ii++;
	}
	dest[ii] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[50] = "Casa de gato";
	char	src[] = " amarela";
	
	printf("%s\n", ft_strcat(dest, src));
	return (0);
}*/
