/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:24:22 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/01 15:54:34 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char const *av[])
{
	std::string     line;
	std::string     lineReplace;
	std::ifstream   file;
	std::ofstream   exitFile;
	
	if (ac != 4)
	{
		ftPrintErr("Error : more or less than 3 arg");
		return (1);
	}
   	file.open(av[1]);
 	if (!file.is_open())
	{
		ftPrintErr(ftStrJoin(av[1], " : file not found or don't have permission"));
		return (1);
	}
	exitFile.open(ftStrJoin(av[1], ".replace").c_str());
	line = getNextLine(file);
	while (line.size() > 0)
	{
		lineReplace = findAndReplace(line, av[2],  av[3]);
		exitFile.write(lineReplace.c_str(), lineReplace.size());
		line = getNextLine(file);
	}
	file.close();
	return (0);
}

std::string findAndReplace(std::string pStr, std::string pFind, std::string pReplace)
{
	std::string res;
	int         len = pStr.length();
	int         lenFind = pFind.length();
	int         i = 0;

	if (pFind.empty())
		return (pStr);
	while (i < len)
	{
		if (ftStrncmp(&pStr[i], pFind, lenFind) == 0)
		{
			res.append(pReplace);
			i += lenFind;
		}
		else
		{
			res += pStr[i];
			i++;
		}
	}
	return (res);
}
