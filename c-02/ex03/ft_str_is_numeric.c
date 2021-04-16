/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:46:31 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 18:46:28 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_numeric(char *str)
{
	int position;
	int result;

	result = 1;
	position = 0;
	while (str[position] != '\0' && position != -1)
	{
		if (str[position] >= '0' && str[position] <= '9')
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
