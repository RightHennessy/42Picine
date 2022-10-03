/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_commbn.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:06:40 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/02 16:19:39 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combination(char ar[], int idx, int last, int n)
{
	if (last == 0)
	{
		write(1, ar, n);
		if (ar[0] != 10 - n + '0')
			write(1, ", ", 2);
		return ;
	}
	else
	{
		idx++;
		ar[idx] = ar[idx - 1] + 1;
		while (ar[idx] <= 10 - last + '0')
		{
			combination(ar, idx, last - 1, n);
			ar[idx]++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	ar[10];

	ar[0] = '0';
	while (ar[0] <= '9' + 1 - n)
	{
		combination(ar, 0, n - 1, n);
		ar[0]++;
	}
}
