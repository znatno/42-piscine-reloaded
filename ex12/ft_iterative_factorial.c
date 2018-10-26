/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 22:29:18 by ibohun            #+#    #+#             */
/*   Updated: 2018/10/25 20:58:09 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int sum;

	i = 1;
	sum = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			sum *= i;
			i++;
		}
	}
	if (sum < 1)
		return (0);
	return (sum);
}
