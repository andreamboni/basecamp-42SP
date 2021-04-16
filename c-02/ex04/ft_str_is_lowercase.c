/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:58:57 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 18:47:52 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_lowercase(char *str)
{
	int position;
	int result;

	result = 1;
	position = 0;
	while (str[position] != '\0' && position != -1)
	{
		if (str[position] >= 'a' && str[position] <= 'z')
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
