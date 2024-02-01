/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:54:53 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/19 19:48:06 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int main()
{
	int c;

	c = 97;
	if (ft_isalnum(c) == 1)
		printf ("1\n");
	else
		printf ("0\n");
	if	(isalnum(c) == 1)
		printf ("1\n");
	else
		printf ("0\n");
	return (0);
}*/
