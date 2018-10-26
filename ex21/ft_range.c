/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:21:33 by ibohun            #+#    #+#             */
/*   Updated: 2018/10/23 21:39:50 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		i;
	int		dif;

	dif = max - min;
	i = 0;
	if (min >= max)
		return (0);
	arr = (int*)malloc((dif + 1) * sizeof(int));
	while (i < dif)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
