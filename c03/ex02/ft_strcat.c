/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:42:54 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/23 19:43:12 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_end;
	int		i;
	int		j;

	dest_end = dest;
	i = 0;
	while (dest_end[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest_end[i] = src[j];
		i++;
		j++;
	}
	dest_end[i] = '\0';
	return (dest);
}

/* int	main()
{
	char	src[6] = "sanxe";
	char	dest[11] = "perro";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
} */
