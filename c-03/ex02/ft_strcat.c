/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:57:45 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 19:24:23 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int position;
	int count;

	count = 0;
	position = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[position])
	{
		dest[count] = src[position];
		count++;
		position++;
	}
	dest[count] = '\0';
	return (dest);
}
