/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:44:53 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/11 18:32:00 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // for std::cout

int	main(int argc, char **argv)
{
	int i; // for each argument input
	int j; // for each character in each argument

	if (argc == 1) // if only program's name as argument
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"; // char output
	i = 1; // initiate argv as second parameter (after program's name)
	while (i < argc) //iterate until last argument
	{
		j = 0; // initiate to first char of the current parameter
		while (argv[i][j])
		{
			std::cout << (char)std::toupper(argv[i][j]); // toupper returns int
			j++;
		}
		i++;
	}
	std::cout << "\n";
}
