/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:40:43 by gupark            #+#    #+#             */
/*   Updated: 2021/10/10 17:16:04 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int width, int depth)
{
	int	w;
	int	d;

	w = 0;
	d = 0;
	while (d < depth && depth > 0 && width > 0)
	{
		while (w < width)
		{
			if (w == 0 && (d == 0 || d == depth - 1))
				ft_putchar('A');
			else if (w == width - 1 && (d == 0 || d == depth - 1))
				ft_putchar('C');
			else if (d == 0 || w == 0 || d == depth - 1 || w == width - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		d++;
		w = 0;
	}
}
