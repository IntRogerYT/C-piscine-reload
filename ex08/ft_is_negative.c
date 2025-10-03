/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:19:37 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/09/30 15:07:33 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n >= 0)
		ft_putchar(pos);
	else
		ft_putchar(neg);
}
/*
int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
*/
