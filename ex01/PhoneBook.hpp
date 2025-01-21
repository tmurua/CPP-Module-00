/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:58:45 by tmurua            #+#    #+#             */
/*   Updated: 2025/01/21 12:30:14 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int currentIndex;

public:
	// Constructor initializes phonebook with a valid starting index
	PhoneBook() : currentIndex(0) {}

	// addContact: collects contact info and stores it in next array position
	void addContact()
	{
		Contact contact;
		std::string input;

		std::cout << "First Name: ";
		std::getline(std::cin, input);
		contact.setFirstName(input);

		std::cout << "Last Name: ";
		std::getline(std::cin, input);
		contact.setLastName(input);

		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		contact.setNickname(input);

		std::cout << "Phone Number: ";
		std::getline(std::cin, input);
		contact.setPhoneNumber(input);

		std::cout << "Darkest Secret: ";
		std::getline(std::cin, input);
		contact.setDarkestSecret(input);

		// Store in the array, overwrite if full
		contacts[currentIndex] = contact;
		currentIndex = (currentIndex + 1) % 8;
	}
};
