/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:38:19 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/09/26 14:57:34 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

char	*ft_strdup(char	*src)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = malloc(sizeof(*src));
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
int	main(void)
{
	char	*str;
	str = "Hola, mundo!";
	printf("%s", ft_strdup(str));
}
*/
