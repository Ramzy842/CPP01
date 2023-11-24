/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:13:35 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/22 15:25:30 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main (int argc, char **argv)
{
	std::string level;
	if (argv[1])
		level = argv[1];
	if (argc != 2 || level.length() == 0)
	{
		std::cerr << "\033[1;31mUsage: ./harlFilter LEVEL\033[0m" << std::endl;
		return (1);
	}
	Harl Harl;
	Harl.complain(level);
	return (0);
}