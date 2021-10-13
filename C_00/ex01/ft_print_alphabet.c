/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:56:30 by gupark            #+#    #+#             */
/*   Updated: 2021/10/14 02:47:48 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	a;
	int		index;
	int		numofapb;

	a = 'a';
	index = 0;
	numofapb = 26;
	while (index++ < numofapb)
	{
		write(1, &a, 1);
		a++;
	}
}
