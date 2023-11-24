/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:47:09 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/18 21:56:29 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HumanB_HPP
#define HumanB_HPP

#include "./Weapon.hpp"
#include <iostream>

class HumanB {
	private:
	    std::string name;
	    Weapon* weapon;
	
	public:
	    HumanB(std::string humanName) : name(humanName), weapon(nullptr) {}
	    void setWeapon(Weapon& newWeapon);
	    void attack();
};

#endif