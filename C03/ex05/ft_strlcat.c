/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:24:22 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/17 19:19:56 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	ii;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	ii = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[ii] != '\0' && i < size - 1)
	{
		dest[i] = src[ii];
		ii++;
		i++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}

/*nt	main(void)
{
	char	dest[50] = "Casa de gato";
	char	src[] = " amarela com laranja";

	printf("%u\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("%s\n", dest);
	return (0);
}*/