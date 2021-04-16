/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:00:04 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 19:04:23 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int position;

	position = 0;
	while (src[position])
	{
		dest[position] = src[position];
		position++;
	}
	dest[position] = '\0';
	return (dest);
}
