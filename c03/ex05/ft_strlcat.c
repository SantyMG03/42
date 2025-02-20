/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:25:25 by santmore          #+#    #+#             */
/*   Updated: 2025/02/17 10:05:54 by santmore         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	res;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size > dlen)
	{
		res = dlen + slen;
	}
	else
	{
		res = slen + size;
	}
	i = 0;
	while (src[i] != '\0' && dlen <= size)
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen] = '\0';
	return (res);
}
