/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:59:12 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/20 19:43:06 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>	// for std::string

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:
	// ask for user input to set data fields
	void	set_data(std::string fname, std::string lname,
		std::string nname, std::string pnumber, std::string dsecret)
	{
		firstName = fname;
		lastName = lname;
		nickname = nname;
		phoneNumber = pnumber;
		darkestSecret = dsecret;
	}
	// display all data fields
	void	display_data()
	{
		std::cout << "First Name: " << firstName << "\n";
		std::cout << "Last Name: " << lastName << "\n";
		std::cout << "Nickname: " << nickname << "\n";
		std::cout << "Phone Number: " << phoneNumber << "\n";
		std::cout << "Darkest Secret: " << darkestSecret << "\n";
	}
};

#endif
