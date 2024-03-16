/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush001.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfranck <kfranck@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:00:58 by kfranck           #+#    #+#             */
/*   Updated: 2024/03/16 14:13:50 by kfranck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar.c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// rush00.c
void	print_horizontal_line(int x, char c)
{
	int	l;

	l = 0;
	while (l < x)
	{
		ft_putchar(c);
		l++;
	}
}

void	print_middle_lines(int x, int y, char border, char space)
{
	int	h;
	int	l;

	h = 0;
	while (h < y - 2)
	{
		ft_putchar(border);
		l = 0;
		while (l < x - 2)
		{
			ft_putchar(space);
			l++;
		}
		ft_putchar(border);
		ft_putchar('\n');
		h++;
	}
}

void	rush(int x, int y)
{
	char	horizontal;
	char	vertical;

	horizontal = '-';
	vertical = '|';
	print_horizontal_line(x, horizontal);
	ft_putchar('\n');
	print_middle_lines(x, y, vertical, ' ');
	if (y > 1)
	{
		print_horizontal_line(x, horizontal);
		ft_putchar('\n');
	}
}

// main.c
int	main(void)
{
	rush(5, 5);
	return (0);
}
