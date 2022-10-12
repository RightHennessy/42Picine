/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:41:59 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/10 15:39:18 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				cnt;

	if (size == 0)
		*dest = '\0';
	else
	{
		i = 0;
		while (*(src + i) && i < size - 1)
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	cnt = 0;
	while (*(src + cnt))
	{
		cnt++;
	}
	return (cnt);
}
