/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:14:39 by rchahban          #+#    #+#             */
/*   Updated: 2023/11/20 20:13:16 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

void replaceStrings(std::ofstream& outputFile, std::string& s1, const std::string& s2, const std::string& input)
{
	size_t position = input.find(s1);
    if (position != std::string::npos)
	{
        outputFile << input.substr(0, position);
		outputFile << s2;
        size_t nextPosition = position + s1.length();
        while ((position = input.find(s1, nextPosition)) != std::string::npos)
		{
            outputFile << input.substr(nextPosition, position - nextPosition);
			outputFile << s2;
            nextPosition = position + s1.length();
        }
        outputFile << input.substr(nextPosition);
    }
	else
        outputFile << input;
	outputFile << "\n";
}

int startReplacing(std::string& filename, std::string& s1, const std::string& s2, std::ifstream& inputFile)
{
	std::string destFile = filename + ".replace"; 
	std::ofstream outputFile(destFile);
	std::string strToFill;
	if (!outputFile.is_open())
	{
		std::cerr << "\033[1;31mError opening file \033[35m" << destFile << "\033[0m" << std::endl;
		return (1);
	}
    while (std::getline(inputFile, strToFill))
	{
        replaceStrings(outputFile, s1, s2, strToFill);
	}
	outputFile.close();
	return (0);
}

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "\033[1;31mUsage: ./main filename s1 s2\033[0m" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream inputFile(filename);
	if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0)
		return (1);
	if (!inputFile.is_open())
	{
		std::cerr << "\033[1;31mError opening file \033[35m" << filename << "\033[0m" << std::endl;
		return (1);
	}
	else
		startReplacing(filename, s1, s2, inputFile);
	inputFile.close();
	return (0);
}