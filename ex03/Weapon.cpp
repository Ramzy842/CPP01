/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:47:15 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/18 21:59:50 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

const std::string& Weapon::getType() {
	return this->type;
}
void Weapon::setType(const std::string& newType) {
	this->type = newType;
}