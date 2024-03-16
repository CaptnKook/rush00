/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfranck <kfranck@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:58:06 by kfranck           #+#    #+#             */
/*   Updated: 2024/03/16 13:49:01 by kfranck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	l;
	int	h;
	char	largeur;
	char	hauteur;

	l = 0;
	h = 0;
	largeur = '-';
	hauteur = '|';
	while (l < x)
	{
		ft_putchar(largeur);
		l++;
	}
	ft_putchar('\n');
	while (h < y - 2)
	{
		ft_putchar(hauteur);
		l = 0;
		while (l < x - 2)
		{
			ft_putchar(' ');
			l++;
		}
		ft_putchar(hauteur);
		ft_putchar('\n');
		h++;
	}
	if (y > 1)
	{
		l = 0;
		while (l < x)
		{
			ft_putchar(largeur);
			l++;
		}
		ft_puthcar('\n');
	}
}

int	main()
{
	rush(5, 5);
	return (0);
}
