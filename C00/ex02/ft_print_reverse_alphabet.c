/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:40:13 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/17 15:41:46 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}
// int main()
// {
// 	ft_print_reverse_alphabet();
// }
// • Escreva uma função que exiba o alfabeto em minúsculas, numa única linha, em
// ordem crescente, começando pela letra ’a’.
// • Ela deve ser prototipada da seguinte maneira:
// void ft_print_alphabet(void);