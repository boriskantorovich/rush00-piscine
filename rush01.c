/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehorker <ehorker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 22:09:03 by ehorker           #+#    #+#             */
/*   Updated: 2018/08/26 22:25:38 by ehorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	conc(int s, int a, int b, int k)
{
	if ((s == b || s == 1))
	{
		if ((k == 1 && s == b) || (k == a && s == 1))
			if ((b != 1 && a != 1) || (s != b))
				ft_putchar('\\');
		if (k != 1 && k != a)
			ft_putchar('*');
	}
	else if ((k == 1 || k == a) && (s < b && s != 1))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int a, int b)
{
	int s;
	int k;

	s = b;
	ft_putchar('/');
	while (s > 0)
	{
		k = a;
		while (k > 0)
		{
			conc(s, a, b, k);
			k--;
		}
		if (s == 1 && a != 1 && b != 1)
			ft_putchar('/');
		if (b == 1 && s == 1 && a != 1)
			ft_putchar('\\');
		ft_putchar('\n');
		s--;
	}
}
