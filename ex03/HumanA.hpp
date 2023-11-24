/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:47:05 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/18 21:55:30 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include "./Weapon.hpp"
#include <iostream>


class HumanA {
	private:
	    std::string name;
	    Weapon& weapon;
	public:
		HumanA(std::string humanName, Weapon& newWeapon) : name(humanName), weapon(newWeapon) {};
	    void attack();
};

#endif