/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:50:04 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 18:58:09 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int position;

	position = 0;
	while (str[position])
	{
		if ((str[position - 1] < 48 || str[position - 1] > 57)
		&& (str[position - 1] < 65 || str[position - 1] > 90)
		&& (str[position - 1] < 97 || str[position - 1] > 122))
		{
			if (str[position] >= 'a' && str[position] <= 'z')
				str[position] -= 32;
			position++;
		}
		else if ((str[position - 1] >= 'A' && str[position - 1] <= 'Z')
		|| (str[position - 1] >= 'a' && str[position - 1] <= 'z')
		|| (str[position - 1] >= '0' && str[position - 1] <= '9'))
		{
			if (str[position] >= 'A' && str[position] <= 'Z')
				str[position] += 32;
			position++;
		}
		else
			position++;
	}
	return (str);
}
