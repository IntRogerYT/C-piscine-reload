/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:41:25 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/09/23 12:46:30 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d\n", ft_recursive_factorial(nb));
	return (0);
}
