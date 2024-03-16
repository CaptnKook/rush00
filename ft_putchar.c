/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfranck <kfranck@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:20:34 by kfranck           #+#    #+#             */
/*   Updated: 2024/03/16 13:59:34 by kfranck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_putchar(char c);

void	ft_putchar(int x, int y)
{
	char	largeur;
	char	hauteur;

	largeur = '-';
	hauteur = '|';
	write(1, &largeur, 1);
	write(1, &hauteur, 1);
}
/*
int	main(void)
{
	ft_putchar('a');
	return (0);
}*/
