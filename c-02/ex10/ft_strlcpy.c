/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:49:02 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 19:03:37 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;
	unsigned int position;
	unsigned int hold;

	position = 0;
	hold = 0;
	count = 1;
	while (src[hold])
	{
		hold++;
	}
	if (hold != 0)
	{
		while (count < size)
		{
			dest[position] = src[position];
			count++;
			position++;
		}
	}
	dest[position] = '\0';
	return (hold);
}
