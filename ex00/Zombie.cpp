/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:19:52 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/17 12:40:52 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << "Zombie " << name << " has been created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " has been destroyed" << std::endl;
}

