/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:48:20 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/23 21:23:06 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_str;
	char	*temp_to_find;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		temp_str = str;
		temp_to_find = to_find;
		while (*temp_str == *temp_to_find && *temp_to_find != '\0')
		{
			temp_str++;
			temp_to_find++;
		}
		if (*temp_to_find == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

/* int main()
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	char *to_find = "ghi";
	char *result;

	result = ft_strstr(str, to_find);
	if (result != NULL)
		printf("Cadena encontrada en la direccion: %p", result);
	else
		printf("Cadena no encontrada.");
	return (0);
} */
