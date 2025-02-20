/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:14:14 by santmore          #+#    #+#             */
/*   Updated: 2025/02/17 11:18:38 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	search(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

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

int	ft_atoi_base_rec(char *str, char *base)
{
	int	len;
	int	i;
	int	n;
	int	positivo;

	i = 0;
	positivo = 1;
	len = ft_strlen(str);
	if (base[0] == '-')
	{
		positivo = -1;
		i++;
	}
	while (i < len)
	{
		n = n * ft_strlen(base) + search(base, str[i]);
		i++;
	}
	return (n * positivo);
}

int	ft_atoi_base(char *str, char *base)
{
	if (check_base)
	{
		return (ft_atoi_base_rec(str, base));
	}
	else
	{
		return (0);
	}
}
