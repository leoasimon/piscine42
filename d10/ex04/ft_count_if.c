/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 11:55:49 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/19 07:10:35 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			nb++;
		i++;
	}
	return (nb);
}
