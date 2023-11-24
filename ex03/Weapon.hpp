/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:47:17 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/18 22:00:34 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	private:
	    std::string type;
	public:
	    Weapon(std::string newType) : type(newType) {}
	    const std::string& getType();
	    void setType(const std::string& newType);
};

#endif