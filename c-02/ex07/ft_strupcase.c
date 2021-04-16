/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:25:31 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 18:55:12 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str)
{
	int position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] < 97 || str[position] > 122)
		{
			position++;
		}
		else
		{
			str[position] -= 32;
			position++;
		}
	}
	return (str);
}
