/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:48:58 by yerchoi           #+#    #+#             */
/*   Updated: 2022/09/30 21:13:15 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char *c)
{
	char	c1;
	char	c2;

	c1 = ',';
	c2 = ' ';
	write(1, c, sizeof(char) * 3);
	if (c[0] != '7' | c[1] != '8' | c[2] != '9')
	{
		write(1, &c1, 1);
		write(1, &c2, 1);
	}
}

void	ft_print_comb(void)
{
	char	c[3];

	c[0] = '0';
	while (c[0] <= '7')
	{
		c[1] = c[0] + 1;
		while (c[1] <= '8')
		{
			c[2] = c[1] + 1;
			while (c[2] <= '9')
			{
				print_comb(c);
				c[2]++;
			}
			c[1]++;
		}
		c[0]++;
	}
}
