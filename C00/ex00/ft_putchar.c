/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:19:25 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/17 15:19:29 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int main()
// {
// 	ft_putchar('a');
// }
// Escreva uma função que exiba o caractere passado como parâmetro.
// • Ela deve ser prototipada da seguinte maneira:
// void ft_putchar(char c);
// Para exibir o caractere, você deve usar a função write da seguinte maneira.
// write(1, &c, 1);
