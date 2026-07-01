/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 20:26:00 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/01 20:26:00 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_params(int argc, char *argv[])
{
    int	i;
    int	j;

    i = 1; // Start from 1 to skip the program name
    while (i < argc)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    ft_print_params(argc, argv);
    return (0);
}
