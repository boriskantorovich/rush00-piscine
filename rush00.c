/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfisher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 21:21:59 by dfisher           #+#    #+#             */
/*   Updated: 2018/08/26 21:22:05 by dfisher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_str(int i, int j, int a, int b)
{
	if (j == b || j == 1)
	{
		if (i == a || i == 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else if (i == a || i == 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int a, int b)
{
	int i;
	int j;

	j = b;
	while (j > 0)
	{
		i = a;
		while (i > 0)
		{
			ft_print_str(i, j, a, b);
			i--;
		}
		ft_putchar('\n');
		j--;
	}
}
