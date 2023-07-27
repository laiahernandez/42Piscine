/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:42:38 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/23 20:37:18 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*dest_end;

	i = 0;
	dest_end = dest;
	if (dest == 0 || src == 0)
		return (0);
	while (*dest_end != '\0')
		dest_end++;
	while (i < nb && src[i] != '\0')
	{
		dest_end[i] = src[i];
		i++;
	}
	dest_end[i] = '\0';
	return (dest);
}
/*
int main(int argc, char *argv[])
{
	if (argc == 4)
		printf("Dest: %s\n", ft_strncat(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
*/
