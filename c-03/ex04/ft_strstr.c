/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:11:05 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/14 19:36:10 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int position;
	int count;

	if (to_find[0] == '\0')
		return (str);
	position = 0;
	while (str[position] != '\0')
	{
		count = 0;
		while (to_find[count] != '\0')
		{
			if (str[position + count] == to_find[count])
			{
				count++;
			}
			else
				break ;
		}
		if (to_find[count] == '\0')
		{
			return (str + position);
		}
		position++;
	}
	return (0);
}
