/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:13:32 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/29 23:24:44 by rchahban         ###   ########.fr       */
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
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index;
	for (index = 0; index < 4; index++)
	{
		if (level == levels[index])
			break;
	}
	switch(index)
	{
		case 0:
			fnPointer = &Harl::debug;
			(this->*fnPointer)();
		case 1:
			fnPointer = &Harl::info;
			(this->*fnPointer)();
		case 2:
			fnPointer = &Harl::warning;
			(this->*fnPointer)();
		case 3:
			fnPointer = &Harl::error;
			(this->*fnPointer)();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
	}
}