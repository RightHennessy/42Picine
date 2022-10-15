/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:51:39 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/12 22:18:56 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// KO : 이유 모름

int	check_base2(char *base)
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

int	change_base(char *str, char *base, int check)
{
	int	i;
	int	ans;

	ans = 0;
	while (*str)
	{
		i = 0;
		while (*(base + i))
		{
			if (*(base + i) == *str)
				break ;
			i++;
		}
		if (i == check)
			return (ans);
		ans *= check;
		ans += i;
		str++;
	}
	return (ans);
}

int	ft_atoi_base(char *str, char *base)
{
	int	check;
	int	flag;

	check = check_base2(base);
	if (check <= 1)
		return (0);
	flag = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flag *= -1;
		str++;
	}
	return (flag * change_base(str, base, check));
}
