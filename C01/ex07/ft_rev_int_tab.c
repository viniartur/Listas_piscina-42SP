/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:11:16 by vvieira           #+#    #+#             */
/*   Updated: 2025/05/30 18:29:17 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	end;

	index = 0;
	end = 0;
	while (index < (size / 2))
	{
		end = tab[index];
		tab[index] = tab[size -1 - index];
		tab[size -1 - index] = end;
		index++;
	}
}

// int		main(void)
// {
// 	int tab[] = {0, 1, 2, 3, 4, 5};
// 	int size = 6;

// 	ft_rev_int_tab(tab, size);
// 	return (0);
// }