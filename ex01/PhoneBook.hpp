/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:07:42 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/20 20:08:36 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	all_contacts[8];
	int			current_contact; // where current contact will be stored

public:
	PhoneBook() // constructor method to initialize current_contact to 0
	{
		current_contact = 0;
	}

	void	add_contact()
	{
		Contact		contact;
		std::string	input; // variable to temporarily store each user input
		std::cout << "First Name: "; // ask input from user for each field
		get_input(input);
		std::string	fname = input;
		std::cout << "Last Name: ";
		get_input(input);
		std::string	lname = input;
		std::cout << "Nickname: ";
		get_input(input);
		std::string	nname = input;
		std::cout << "Phone Number: ";
		get_input(input);
		std::string	pnumber = input;
		std::cout << "Darkest Secret: ";
		get_input(input);
		std::string	dsecret = input;
		// fill contact with provided data
		contact.set_data(fname, lname, nname, pnumber, dsecret);
		// save contact into array at current position
		all_contacts[current_contact] = contact;
		// update current_contact position (circular buffer: 0-7)
		current_contact = (current_contact + 1) % 8;
	}

	void	get_input(std::string &input)
	{
		while (true) // keep prompting until a non-empty input is provided.
		{
			// std::getline stores chars (up to \n) from std::cin into input
			std::getline(std::cin, input);
			if (input != "")
				break;
			std::cout << "Error: Field cannot be empty. \nPlease enter a value: ";
		}
	}
};

#endif
