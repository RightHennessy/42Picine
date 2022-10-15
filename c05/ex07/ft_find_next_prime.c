/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:07:32 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/13 20:56:38 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt2(int nb)
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

int	ft_is_prime2(int nb)
{
	int	i;
	int	sqrt;

	if (nb <= 1)
		return (0);
	i = 2;
	sqrt = ft_sqrt2(nb);
	while (i < sqrt + 1)
	{
		if (nb % i == 0 && i != nb)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime2(nb) == 1)
			return (nb);
		nb++;
	}
}
