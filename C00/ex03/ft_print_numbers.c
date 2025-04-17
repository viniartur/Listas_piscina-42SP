/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:42:47 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/17 15:45:46 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}
// int main()
// {
// 	ft_print_numbers();
// }
// Escreva uma função que exiba todos os dígitos, em uma única linha, em ordem
// crescente.
// • Ela deve ser prototipada da seguinte maneira:
// void ft_print_numbers(void);