/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:53:08 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/12 20:23:06 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int digit, long long nb, int flag)
{
	char	c;

	if (flag == 1)
	{
		c = '-';
		write(1, &c, 1);
	}
	while (digit > 0)
	{
		c = nb / digit + '0';
		write(1, &c, 1);
		nb %= digit;
		digit /= 10;
	}
}

int	check_digit(long long x)
{
	int	cnt;

	cnt = 0;
	while (x > 0)
	{
		cnt++;
		x /= 10;
	}
	return (cnt);
}

void	ft_putnbr(int nb)
{
	long long	n;
	int			i;
	int			digit;
	int			flag;

	flag = 0;
	n = (long long)nb;
	if (n < 0)
	{
		n *= -1;
		flag = 1;
	}
	i = check_digit(n);
	digit = 1;
	while (i > 1)
	{
		digit *= 10;
		i--;
	}
	print_num(digit, n, flag);
}
