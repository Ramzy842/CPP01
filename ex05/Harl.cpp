/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:13:32 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/28 09:41:08 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}
void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}
void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << std::endl;
}
void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*fnPointer)() = NULL;
	
	if (level == "DEBUG")
		fnPointer = &Harl::debug;
	else if (level == "INFO")
		fnPointer = &Harl::info;
	else if (level == "WARNING")
		fnPointer = &Harl::warning;
	else if (level == "ERROR")
		fnPointer = &Harl::error;
	else
	{
		std::cout << "Error: " << level << " level does not exist!" << std::endl;
		return ;
	}
	(this->*fnPointer)();
}