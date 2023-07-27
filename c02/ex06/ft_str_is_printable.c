/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:54:49 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/22 15:25:33 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
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
	result = ft_str_is_printable(str);
	return (result);
} */
