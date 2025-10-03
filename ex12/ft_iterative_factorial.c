/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:47:41 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/01 11:00:31 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
	return (0);
}
*/
