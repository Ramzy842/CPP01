/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:02:13 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/17 15:01:39 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie() {}
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif