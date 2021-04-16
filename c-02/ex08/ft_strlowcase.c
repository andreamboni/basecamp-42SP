/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:46:00 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 18:56:07 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str)
{
	int position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] < 65 || str[position] > 90)
		{
			position++;
		}
		else
		{
			str[position] += 32;
			position++;
		}
	}
	return (str);
}
