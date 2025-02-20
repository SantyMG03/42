/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:05:43 by santmore          #+#    #+#             */
/*   Updated: 2025/02/06 10:40:19 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int tab[], int size)
{
	int	f;
	int	l;
	int	aux;

	f = 0;
	l = size - 1;
	while (f < l)
	{
		aux = tab[f];
		tab[f] = tab[l];
		tab[l] = aux;
		f++;
		l--;
	}
}
