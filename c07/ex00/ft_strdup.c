/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:08:25 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/15 16:38:04 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*(str + cnt))
	{
		cnt++;
	}
	return (cnt);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	size = ft_strlen(src);
	dest = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + size) == '\0';
	return (dest);
}
