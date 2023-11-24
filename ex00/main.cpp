/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:19:41 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/17 12:44:57 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(int argc, char **argv)
{
	if (argc > 1 || argv[1])
	{
		std::cout << "\033[1;31mProgram runs without arguments\033[0m" << std::endl;
		return (0);
	}
	Zombie *zombie = newZombie("FirstZombie");
	zombie->announce();
	randomChump("TempZombie");
	delete zombie;
	return (0);
}