/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:06:38 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/10 16:55:30 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen2(char *str)
{
	int	cnt;

	cnt = 0;
	while (*(str + cnt))
	{
		cnt++;
	}
	return (cnt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	len_dest;
	unsigned int	len_src;

	cnt = 0;
	len_dest = ft_strlen2(dest);
	len_src = ft_strlen2(src);
	while (cnt < size && *dest)
	{
		cnt++;
		dest++;
	}
	if (cnt == size)
		return (len_src + size);
	while (*src && cnt < size - 1)
	{
		*dest = *src;
		src++;
		dest++;
		cnt++;
	}
	*dest = '\0';
	return (len_dest + len_src);
}
