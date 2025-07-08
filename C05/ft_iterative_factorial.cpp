/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stungac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:10:39 by stungac           #+#    #+#             */
/*   Updated: 2022/09/14 18:37:01 by stungac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio
int	ft_iterative_factorial(int nb)
{
	int	a;
	a = 1;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	while (nb < 0)
	{
		return (-1);
	}
	return (a);
}
