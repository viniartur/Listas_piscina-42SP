/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:46:22 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/17 15:52:50 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

// int main()
// {
// 	ft_is_negative(5);
// 	write(1, "\n", 1);
// 	ft_is_negative(-5);
// 	return(0);
// }
// Escreva uma função que exiba ’N’ ou ’P’ 
// segundo o sinal do inteiro passado como
// parâmetro. Se n for negativo, exiba ’N’. 
// Se n for positivo ou nulo, exiba ’P’.
// • Ela deve ser prototipada da seguinte maneira:
// void ft_is_negative(int n);
// A falha é parte da jornada de aprendizado.