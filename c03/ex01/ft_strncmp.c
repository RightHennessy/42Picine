/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:09:19 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/10 16:38:58 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2)
	{
		if (n == 1)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
