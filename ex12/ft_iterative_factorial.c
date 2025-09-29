/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:47:41 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/09/25 12:10:55 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (-1);
	else
	{
		while (nb >= 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
	return (0);
}
*/
