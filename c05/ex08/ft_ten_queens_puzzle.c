/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:37:41 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/15 15:47:15 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int *board)
{
	char	c;
	int		i;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_board(int *board, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (*(board + n) == *(board + i))
			return (0);
		else if (*(board + n) - *(board + i) == n - i)
			return (0);
		else if (*(board + i) - *(board + n) == n - i)
			return (0);
		i++;
	}
	return (1);
}

void	make_board(int *board, int n, int *count)
{
	*(board + n) = 0;
	while (*(board + n) < 10)
	{
		if (check_board(board, n))
		{
			if (n == 9)
			{
				print_board(board);
				*count += 1;
			}
			else
				make_board(board, n + 1, count);
		}
		*(board + n) += 1;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	cnt;

	cnt = 0;
	make_board(board, 0, &cnt);
	return (cnt);
}
