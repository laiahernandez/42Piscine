/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:26:57 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/27 21:17:04 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	unsigned int	c_num;

	c_num = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		c_num = -nb;
	}
	else
		c_num = nb;
	if (c_num > 9)
	{
		ft_putnbr(c_num / 10);
		c_num %= 10;
	}
	c_num = c_num + '0';
	write(1, &c_num, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(atoi(argv[1]));
	return (0);
}
