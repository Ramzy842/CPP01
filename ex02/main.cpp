/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:06:55 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/17 15:17:47 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc > 1 || argv[1])
	{
		std::cout << "\033[1;31mProgram runs without arguments\033[0m" << std::endl;
		return (0);
	}
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
	
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}