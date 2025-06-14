/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:32:26 by vvieira           #+#    #+#             */
/*   Updated: 2025/06/12 17:23:04 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// int main(void)
// {
//     char dest[100];
//     char src[100];

//     // Ponteiro temporário para a string literal
//     char *temp = "Hello";
//     int i = 0;

//     while (temp[i] != '\0')
//     {
//         src[i] = temp[i];
//         i++;
//     }
//     src[i] = '\0';

//     temp = "World";
//     i = 0;
//     while (temp[i] != '\0')
//     {
//         dest[i] = temp[i];
//         i++;
//     }
//     dest[i] = '\0';

//     ft_strcat(dest, src);

//     printf("%s\n", dest);  // Saída: WorldHello

//     return 0;
// }