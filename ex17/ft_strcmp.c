/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:57:28 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/09/25 09:53:53 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			nbr = s1[i] - s2[i];
			return (nbr);
		}
		i++;
	}
	return (nbr);
}
/*
int	main(void)
{
	printf("%d", ft_strcmp("Hola", "Hol"));
	return (0);
}
*/
