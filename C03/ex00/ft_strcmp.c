/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:40:52 by vvieira           #+#    #+#             */
/*   Updated: 2025/06/12 15:43:56 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <unistd.h>

// int main(void)
// {
// 	char s1[] = "Hellow world";
// 	char s2[] = "Hellow world";

// 	printf("%d", ft_strcmp(s1, s2));
// 	return 0;
// }