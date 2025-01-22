/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:58:45 by tmurua            #+#    #+#             */
/*   Updated: 2025/01/22 13:44:46 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip> // for std::setw
#include <cstdlib> // for atoi

class PhoneBook
{
private:
	Contact contacts[8];
	int currentIndex;

public:
	// constructor initializes phonebook with a valid starting index
	PhoneBook() : currentIndex(0) {}

	// collects contact info and stores it in next array position
	void addContact()
	{
		Contact contact;

		// collect user's inputs, each one non-empty
		contact.setFirstName(readNonEmptyInput("First Name: "));
		contact.setLastName(readNonEmptyInput("Last Name: "));
		contact.setNickname(readNonEmptyInput("Nickname: "));
		contact.setPhoneNumber(readNonEmptyInput("Phone Number: "));
		contact.setDarkestSecret(readNonEmptyInput("Darkest Secret: "));

		// store in the array, overwrite if we already have 8
		contacts[currentIndex] = contact;
		currentIndex = (currentIndex + 1) % 8;
	}

	// repeatedly prompts user until input is not empty, then returns it
	std::string readNonEmptyInput(std::string prompt)
	{
		std::string input;

		while (true)
		{
			std::cout << prompt;
			std::getline(std::cin, input);
			if (!input.empty())
				break ;
			std::cout << "Error: field cannot be empty. Please try again.\n";
		}
		return (input);
	}

	// show contacts' first names, last names, nicknames and phone numbers
	void displayAll()
	{
		int	i;

		std::cout << "     Index|First Name| Last Name|  Nickname| Phone Num" << std::endl;
		i = 0;
		while (i < 8)
		{
			std::cout
				<< std::setw(10) << i << "|"
				<< std::setw(10) << formatColumn(contacts[i].getFirstName()) << "|"
				<< std::setw(10) << formatColumn(contacts[i].getLastName()) << "|"
				<< std::setw(10) << formatColumn(contacts[i].getNickname()) << "|"
				<< std::setw(10) << formatColumn(contacts[i].getPhoneNumber())
				<< std::endl;
			i++;
		}
		displayIndex();
	}

	std::string formatColumn(std::string str)
	{
		if (str.size() > 10)
			return str.substr(0, 9) + "."; // first 9 chars plus a dot
		return str;
	}


	void displayIndex()
	{
		int			i;
		std::string	index;

		std::cout << "Select contact's index [0 to 7] for more information: ";
		std::getline(std::cin, index);
		i = std::atoi(index.c_str());
		if (i < 0 || i > 7)
		{
			std::cout << "Invalid index." << std::endl;
			return;
		}
		// check if contact is empty
		if (contacts[i].getFirstName().empty())
		{
			std::cout << "No contact stored at index " << i << std::endl;
			return;
		}

		// print full info (one field per line)
		std::cout << "First Name: "    << contacts[i].getFirstName()   << std::endl;
		std::cout << "Last Name: "     << contacts[i].getLastName()    << std::endl;
		std::cout << "Nickname: "      << contacts[i].getNickname()    << std::endl;
		std::cout << "Phone Number: "  << contacts[i].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << std::endl;
	}
};
