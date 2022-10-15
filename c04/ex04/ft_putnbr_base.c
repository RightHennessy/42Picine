/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:32:27 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/12 20:48:50 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 부호 사이 공백 처리 필요 

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == '+' || *(base + i) == '-')
			return (1);
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (1);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr2(long long n, int check, char *base)
{
	if (n < check)
		write(1, &base[n], 1);
	else
	{
		ft_putnbr2(n / check, check, base);
		write(1, &base[n % check], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			check;
	long long	n;

	check = check_base(base);
	if (check <= 1)
		return ;
	n = (long long)nbr;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	ft_putnbr2(n, check, base);
}
