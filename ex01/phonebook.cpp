/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:16:09 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/20 20:39:10 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	command;

	while (true)
	{
		std::cout << "Would you like to ADD, SEARCH, or EXIT?\n";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contacts();
		else if (command == "EXIT")
			return (0);
	}
}
