/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:19:36 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/03/06 11:41:31 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{	
	char	zero;

	zero = '0';
	while (zero <= '9')
	{
		write(1, &zero, 1);
		zero++;
	}
}