/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laiherna <laiherna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:47:24 by laiherna          #+#    #+#             */
/*   Updated: 2023/07/17 19:33:50 by laiherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	while (i < size)
	{
		n = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = n;
		i++;
		size--;
	}
}
