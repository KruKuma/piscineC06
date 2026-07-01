/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 20:28:31 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/01 20:28:31 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char *argv[])
{
    int	i;
    int	j;

    i = argc - 1; // Start from the last argument
    while (i > 0) // Skip the program name
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i--;
    }
}

int	main(int argc, char *argv[])
{
    ft_rev_params(argc, argv);
    return (0);
}
