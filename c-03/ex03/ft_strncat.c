/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:45:49 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 19:34:10 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int position;
	unsigned int count;

	position = 0;
	count = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[position] && position < nb)
	{
		dest[count] = src[position];
		count++;
		position++;
	}
	dest[count] = '\0';
	return (dest);
}
