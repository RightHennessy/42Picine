/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:12:11 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/13 22:41:56 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_longer(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (*(str1 + i) && *(str2 + i))
	{
		if (*(str1 + i) > *(str2 + i))
			return (1);
		else if (*(str1 + i) < *(str2 + i))
			return (2);
		i++;
	}
	if (*(str1 + i))
		return (1);
	else if (*(str2 + i))
		return (2);
	else
		return (0);
}

void	ft_sort_params(int args, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < args - 1)
	{
		j = i + 1;
		while (j < args)
		{
			if (is_longer(argv[i], argv[j]) == 1)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int args, char **argv)
{
	int	i;
	int	j;

	ft_sort_params(args, argv);
	i = 1;
	while (i < args)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
