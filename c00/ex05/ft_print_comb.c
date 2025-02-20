/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:33:45 by santmore          #+#    #+#             */
/*   Updated: 2025/02/05 17:03:54 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_test_comb(char i, char j, char k)
{
	if (i < j && j < k)
	{
		if (i == '7' && j == '8' && k == '9')
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(k);
		}
		else
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(k);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_test_comb(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
