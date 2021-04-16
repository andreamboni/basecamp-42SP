/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:04:44 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 18:50:04 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_uppercase(char *str)
{
	int position;
	int result;

	result = 1;
	position = 0;
	while (str[position] != '\0' && position != -1)
	{
		if (str[position] >= 'A' && str[position] <= 'Z')
		{
			result = 1;
			position++;
		}
		else
		{
			position = -1;
			result = 0;
		}
	}
	return (result);
}
