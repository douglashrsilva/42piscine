/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:57:32 by dhermann          #+#    #+#             */
/*   Updated: 2024/09/17 20:09:13 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	ii;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		ii = 0;
		if (str[i] == to_find[ii])
		{
			while (to_find[ii] != '\0' && str[i + ii] == to_find[ii])
			{
				ii++;
			}
			if (to_find[ii] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%s\n", ft_strstr("Meucasarao", "casa"));
	return (0);
}*/
