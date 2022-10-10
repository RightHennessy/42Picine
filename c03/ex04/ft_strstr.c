/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:53:14 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/10 16:39:38 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	cnt;

	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			cnt = 0;
			while (*(to_find + cnt) && *(str + cnt))
			{
				if (*(str + cnt) != *(to_find + cnt))
					break ;
				cnt++;
			}
			if (cnt == len)
				return (str);
		}
		str++;
	}
	return (0);
}
