/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:02:23 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/13 20:47:29 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt1(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb && i < 46342)
	{	
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if (nb <= 1)
		return (0);
	i = 2;
	sqrt = ft_sqrt1(nb);
	while (i < sqrt + 1)
	{
		if (nb % i == 0 && i != nb)
			return (0);
		i++;
	}
	return (1);
}
