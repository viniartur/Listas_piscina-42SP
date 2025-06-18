/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 17:40:47 by vvieira           #+#    #+#             */
/*   Updated: 2025/06/18 18:10:58 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar (nb + '0');
	}
	else
	{
		ft_putnbr (nb / 10);
		ft_putchar ((nb % 10) + '0');
	}
}
/*
#include <stdio.h>
#include <limits.h>
int main(void)
{
	int a;

	printf("Digite um numero para putnbr\n");
	scanf("%d", &a);
	
	ft_putnbr(a);
	printf("\n");
	return 0;
}
*/