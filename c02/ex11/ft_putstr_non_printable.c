/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:52:31 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/10 14:59:14 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	c;

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			c = "0123456798abcdef"[*str / 16];
			write(1, &c, 1);
			c = "0123456789abcdef"[*str % 16];
			write(1, &c, 1);
		}
		str++;
	}
}
