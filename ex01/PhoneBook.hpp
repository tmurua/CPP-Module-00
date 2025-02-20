/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:07:42 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/20 17:41:52 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact all_contacts[8];
		int current_contact = 0; // where current contact will be stored

	public:
		void add_contact()
		{
			Contact contact;
			std::string input; // variable to temporarily store each user input

			std::cout << "First Name: "; // ask input from user for each field
			// std::getline stores chars (up to \n) from std::cin into input
			std::getline(std::cin, input);
			// TODO: if input is empty, then ask again
			std::string fname = input;

			std::cout << "Last Name: ";
			std::getline(std::cin, input);
			std::string lname = input;

			std::cout << "Nickname: ";
			std::getline(std::cin, input);
			std::string nname = input;

			std::cout << "Phone Number: ";
			std::getline(std::cin, input);
			std::string pnumber = input;

			std::cout << "Darkest Secret: ";
			std::getline(std::cin, input);
			std::string dsecret = input;

			// fill contact with provided data
			contact.set_data(fname, lname, nname, pnumber, dsecret);

			// save contact into array at current position
			all_contacts[current_contact] = contact;

			// update current_contact position (circular buffer: 0-7)
			current_contact = (current_contact + 1) % 8;
		}
};

#endif
