/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:59:28 by gupark            #+#    #+#             */
/*   Updated: 2021/10/14 02:45:25 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;
	int		numofapb;
	int		index;

	z = 'z';
	numofapb = 26;
	index = 0;
	while (index++ < 26)
	{
		write(1, &z, 1);
		z--;
	}
}
