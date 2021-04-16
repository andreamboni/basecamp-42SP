/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:39:24 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 19:13:12 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int position;
	int result;

	position = 0;
	result = 0;
	while ((s1[position] || s2[position]) && position != -1)
	{
		if (s1[position] > s2[position] || s1[position] < s2[position])
		{
			result = (unsigned char)s1[position] - (unsigned char)s2[position];
			position = -1;
		}
		else
			position++;
	}
	return (result);
}
