/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:35:05 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/07 20:37:22 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sing;

	result = 0;
	sing = 1;
	while ((*str == ' ') && (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
	{
		sing = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sing * result);
}
int	main()
{
	char	*ptr;

	ptr = "  \n   +45+645dfg";
	printf ("atoi es: %d\n", ft_atoi(ptr));
	return (0);
}
