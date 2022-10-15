#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, *str, 1);
        str++;
	}
}

int	check_digits(long long n)
{
	int	digit;

	digit = 1;
	while (n >= 10)
	{
		digit *= 10;
		n /= 10;
	}
	return (digit);
}

void	ft_putnbr(int nb)
{
	char	    c;
	int		    digit;
    long long   n;

    n = nb;
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	digit = check_digits(n);
	while (digit > 0)
	{
		c = (n / digit) + '0';
		write (1, &c, 1);
		n -= digit * (n / digit);
		digit /= 10;
	}
}

void	ft_show_tab(struct t_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}