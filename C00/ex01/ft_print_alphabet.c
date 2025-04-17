/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:29:49 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/17 15:37:55 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}
// int main()
// {
// 	ft_print_alphabet();
// }
// • Escreva uma função que exiba o alfabeto em minúsculas, numa única linha, em
// ordem crescente, começando pela letra ’a’.
// • Ela deve ser prototipada da seguinte maneira:
// void ft_print_alphabet(void);
