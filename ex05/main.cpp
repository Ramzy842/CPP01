/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:13:35 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/28 09:52:15 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main (int argc, char **argv)
{
	(void) argv;
	Harl Harl;
	if (argc == 1)
	{
		Harl.complain("DEBUG");
		Harl.complain("INFO");
		Harl.complain("WARNING");
		Harl.complain("ERROR");
	}
	else
		return (1);
	return (0);
}