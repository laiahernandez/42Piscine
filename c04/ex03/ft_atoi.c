/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:10:48 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/26 23:32:23 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	i = 0;
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\b' || str[i] == '\t')
	{
		i++;
	}
	while (str[i] == '-')
	{
		if (i % 2 == 1)
			nb *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= sign;
	return (nb);
}

/* int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i", ft_atoi(argv[1]));
	return (0);
} */
