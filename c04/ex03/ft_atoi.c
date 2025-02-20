/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:29:37 by santmore          #+#    #+#             */
/*   Updated: 2025/02/13 11:57:14 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	powten(int n)
{
	int	sol;
	int	i;

	i = 0;
	sol = 1;
	while (i < n)
	{
		i++;
		sol *= 10;
	}
	return (sol);
}

int	ft_atoi(char *str)
{
	int	i;
	int	len;
	int	pow;
	int	sol;
	int	aux;

	len = ft_strlen(str);
	i = 0;
	sol = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 57 && str[i] >= 48)
		{
			pow = powten(len - 1);
			aux = str[i] - 48;
			sol = sol + pow * aux;
		}
		len--;
		i++;
	}
	if (str[0] == '-')
	{
		sol *= -1;
	}
	return (sol);
}
