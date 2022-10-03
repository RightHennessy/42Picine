/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 21:18:23 by yerchoi           #+#    #+#             */
/*   Updated: 2022/09/30 21:59:25 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int x, int y)
{
	char	c;

	c = (x / 10) + '0';
	write(1, &c, 1);
	c = (x % 10) + '0';
	write(1, &c, 1);
	c = ' ';
	write(1, &c, 1);
	c = (y / 10) + '0';
	write(1, &c, 1);
	c = (y % 10) + '0';
	write(1, &c, 1);
	if (x != 98 | y != 99)
	{
		c = ',';
		write(1, &c, 1);
		c = ' ';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			print_num(i, j);
			j++;
		}
		i++;
	}
}
