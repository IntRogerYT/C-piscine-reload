/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:00:36 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/09/26 15:17:59 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	ptr = (int *) malloc((min - max) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
