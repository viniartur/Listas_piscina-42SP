/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:16:35 by vvieira           #+#    #+#             */
/*   Updated: 2025/05/29 12:27:49 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// 	#include <unistd.h>
// 	int main(void)
// {
//     int num;         // O inteiro que queremos modificar
//     int *p1;         // Ponteiro 1
//     int **p2;        // Ponteiro 2
//     int ***p3;       // Ponteiro 3
//     int ****p4;      // Ponteiro 4
//     int *****p5;     // Ponteiro 5
//     int ******p6;    // Ponteiro 6
//     int *******p7;   // Ponteiro 7
//     int ********p8;  // Ponteiro 8
//     int *********p9; // Ponteiro 9 (o que será passado para a função)

//     num = 0; // Inicializamos com 0 para ver a mudança
//     p1 = &num;
//     p2 = &p1;
//     p3 = &p2;
//     p4 = &p3;
//     p5 = &p4;
//     p6 = &p5;
//     p7 = &p6;
//     p8 = &p7;
//     p9 = &p8;

//     printf("Valor antes da funcao: %d\n", num); // Deve imprimir 0

//     ft_ultimate_ft(p9); // Chamamos a função com o ponteiro de 9 níveis

//     printf("Valor depois da funcao: %d\n", num); // Deve imprimir 42

//     return (0);
// }
