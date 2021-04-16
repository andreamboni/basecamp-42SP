/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:12:32 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 19:19:56 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int position;
	unsigned int result;
	unsigned int stop;

	position = 0;
	result = 0;
	while ((position < n)
	&& (s1[position] != '\0' || s2[position] != '\0')
	&& stop != 1)
	{
		if (s1[position] != s2[position])
		{
			result = (unsigned char)s1[position] - (unsigned char)s2[position];
			stop = 1;
		}
		else
		{
			position++;
		}
	}
	return (result);
}
