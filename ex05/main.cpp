/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:13:35 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/22 15:20:42 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main ()
{
	Harl Harl;
	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("WARNING");
	Harl.complain("ERROR");
	return (0);
}