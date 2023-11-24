/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:47:03 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/18 21:55:07 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"

void HumanA::attack() {
	std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}