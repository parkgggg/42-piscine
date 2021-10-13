/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:00:07 by gupark            #+#    #+#             */
/*   Updated: 2021/10/12 21:29:50 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	digit;
	int		index;

	digit = '0';
	index = 0;
	while (index++ <= 9)
	{
		write(1, &digit, 1);
		digit++;
	}
}
