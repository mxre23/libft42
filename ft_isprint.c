/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:57:45 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/19 19:48:49 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}
/*
int main()
{
	int	c;

	c = 30;
	if (ft_isprint(c) == 1)
		printf ("V");
	else
		printf ("F");
	if (isalpha(c) == 1)
		printf ("V");
	else
		printf ("F");
	return (0);
}*/
