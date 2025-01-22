/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:55:47 by tmurua            #+#    #+#             */
/*   Updated: 2025/01/22 13:17:59 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout, std::cin
#include <string>   // std::string

/* the Contact class holds personal info and set/get methods to access it */
class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	// "set" methods allow access to private member variables
	void setFirstName(std::string fname)
	{
		firstName = fname;
	}
	void setLastName(std::string lname)
	{
		lastName = lname;
	}
	void setNickname(std::string nname)
	{
		nickname = nname;
	}
	void setPhoneNumber(std::string pnumber)
	{
		phoneNumber = pnumber;
	}
	void setDarkestSecret(std::string secret)
	{
		darkestSecret = secret;
	}

	// "get" methods allow read access to private member variables
	std::string getFirstName()
	{
		return (firstName);
	}
	std::string getLastName()
	{
		return (lastName);
	}
	std::string getNickname()
	{
		return (nickname);
	}
	std::string getPhoneNumber()
	{
		return (phoneNumber);
	}
	std::string getDarkestSecret()
	{
		return (darkestSecret);
	}
};
