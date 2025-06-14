/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:53:36 by vvieira           #+#    #+#             */
/*   Updated: 2025/06/12 16:04:11 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	if (!n)
// 		return (0);
// 	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < n)
// 	{
// 		i++;
// 	}
// 	if (i == n || !s1[i] || !s2[i])
// 		return (0);
// 	return (s1[i] - s2[i]);
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>

// int main(void)
// {
// 	char s1[] = "Hellow world";
// 	char s2[] = "Hellow world";

// 	printf("%d", ft_strncmp(s1, s2,5));
// 	return 0;
// }