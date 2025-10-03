/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:36:26 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/09/30 11:51:55 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int     ft_strlen(char *str)
{
        int     count;

        count = 0;
        while (str[count] != 0)
        {
                count++;
        }
        return (count);
}*/
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
