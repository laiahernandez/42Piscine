/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:50:16 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/22 15:23:04 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') 
			&& (str[i] < 'a' || str[i] > 'z'))
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
	result = ft_str_is_alpha(str);
	return (result);
} */
