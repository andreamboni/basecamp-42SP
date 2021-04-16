/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:11:26 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 18:51:45 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_printable(char *str)
{
	int position;
	int result;

	result = 1;
	position = 0;
	while (str[position] != '\0' && position != -1)
	{
		if (str[position] >= ' ' && str[position] <= '~')
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
