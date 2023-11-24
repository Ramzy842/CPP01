/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:33:50 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/17 14:59:06 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	for (int x = 0; x < N; x++)
	{
		zombies[x] = Zombie(name);
	}
	return zombies;
}