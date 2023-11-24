/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:47:07 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/18 21:56:12 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

void HumanB::setWeapon(Weapon& newWeapon) {
	if (this->weapon) {
	    this->weapon->setType(newWeapon.getType());
	} else {
	    this->weapon = &newWeapon;
	}
}

void HumanB::attack() {
	if (this->weapon && !this->weapon->getType().empty()) {
	    std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
	} else {
	    std::cout << this->name << " is unarmed and cannot attack." << std::endl;
	}
}