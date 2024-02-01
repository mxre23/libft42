/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:09:57 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/19 19:44:10 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int	c;
	
	c = 55;
	if (ft_isdigit(c) == 1)
		printf ("V");
	else
		printf ("F");
	if (isdigit(c) == 1)
		printf ("V");
	else
		printf ("F");
	return (0);
}*/
