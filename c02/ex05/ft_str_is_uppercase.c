/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:45:50 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/22 15:25:12 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	result = ft_str_is_uppercase(str);
	return (result);
} */
