/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:15:52 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/10 15:14:35 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prev(char prev)
{
	if (prev >= 'A' && prev <= 'Z')
		return (1);
	else if (prev >= 'a' && prev <= 'z')
		return (1);
	else if (prev >= '0' && prev <= '9')
		return (1);
	else
		return (-1);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	char	prev;

	ptr = str;
	prev = ' ';
	while (*ptr)
	{
		if (check_prev(prev) == 1)
		{
			if (*ptr >= 'A' && *ptr <= 'Z')
				*ptr += ('a' - 'A');
		}
		else
		{
			if (*ptr >= 'a' && *ptr <= 'z')
				*ptr -= ('a' - 'A');
		}
		prev = *ptr;
		ptr++;
	}
	return (str);
}
