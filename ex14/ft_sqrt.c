/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:09:43 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/09/23 14:23:22 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			else
				i++;
		}
		return (0);
	}
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(7));
	return (0);
}
*/
