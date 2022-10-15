/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:38:14 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/15 16:39:13 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*arr;
	long long	size;

	if (min >= max)
		return NULL;
	size = max - min;
	arr = malloc(sizeof(int)*size);
	while(--size >= 0){
		arr[size] = --max;
	}
	return (arr);
}
