/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:28:11 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/15 19:34:05 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char src[] = "Text";
	char dest[5];
	unsigned int n;
	unsigned int i; 

	n = 3;
	i = 0;
	ft_strncpy(dest, src, n);
	while (i < n && dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
