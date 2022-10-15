/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:12:52 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/13 20:41:50 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	flag;
	int	ans;

	flag = 1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			break ;
		else if (*str == '-')
			flag *= -1;
		str++;
	}
	ans = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		ans *= 10;
		ans += (*str - '0');
		str++;
	}
	return (flag * ans);
}
