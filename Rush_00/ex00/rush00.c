/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:51:41 by gupark            #+#    #+#             */
/*   Updated: 2021/10/10 17:14:47 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	rush(int w, int h)
{
	int	x;
	int	y;

	y = 0;
	while (y < h && h > 0 && w > 0)
	{
		x = 0;
		while (x < w)
		{
			if ((x == 0 || x == w - 1) && (y == 0 || y == h - 1 ))
				ft_putchar('o');
			else if ((y == 0 || y == h - 1))
				ft_putchar('-');
			else if (x == 0 || x == w - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
	return (0);
}
