/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:15:48 by ibohun            #+#    #+#             */
/*   Updated: 2018/10/25 21:04:36 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*point;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(point = (char*)malloc((i + 1) * sizeof(*src))))
		return (0);
	if (point == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		point[i] = src[i];
		i++;
	}
	point[i] = '\0';
	return (point);
}
