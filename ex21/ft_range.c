/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:00:36 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/01 10:49:08 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (0);
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (0);
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
