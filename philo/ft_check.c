/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:49:35 by akayle            #+#    #+#             */
/*   Updated: 2022/07/01 14:58:01 by akayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_check_numbers(char **argv)
{
	int	i;
	int	nb;

	i = 1;
	nb = 0;
	while (argv[i])
	{
		nb = 0;
		while (argv[i][nb] != '\0')
		{
			if (argv[i][nb] < '0' || argv[i][nb] > '9')
				return (1);
			nb ++;
		}
		i ++;
	}
	return (0);
}

int	ft_check_phylo(t_init *init)
{
	if (init->number_of_philosophers > 200 || init->number_of_philosophers < 0)
	{
		printf("Wrong number of Phylo\n");
		return (1);
	}
	if (init->time_to_eat <= 0 || init->time_to_die <= 0
		|| init->time_to_sleep <= 0)
	{
		printf ("Wrong set time\n");
		return (1);
	}
	return (0);
}
