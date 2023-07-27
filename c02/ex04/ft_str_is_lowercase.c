/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:10:29 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/22 15:24:39 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}

/* int	main(void)
{
	char	*str;
	int	result;

	str = "hola";
	result = ft_str_is_lowercase(str);
	return (result);
} */
