/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:15:30 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/09 20:34:28 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool	replace_file(std::string in_file, std::string s1, std::string s2)
{
	size_t pos = 0;
	std::string buff;
	std::string out_file = ".replace";
	out_file = in_file + out_file;

	std::ifstream in(in_file.c_str());
	if (!in.good())
	{
		std::cerr << "Error: could not open !\n";
		return (false);
	}

	std::ofstream out(out_file.c_str());
	if (!out.good())
	{
		std::cerr << "Error: could not open !\n";
		return (false);
	}
	while (getline(in, buff))
	{
		while (true)
		{
			pos = buff.find(s1);
			if (pos == std::string::npos)
				break;
			buff.erase(pos, s1.size());
			buff.insert(pos, s2);
		}
		out << buff << std::endl;
	}
	in.close();
	out.close();
	return (true);
}

bool	pars_args(std::string in_file, std::string s1, std::string s2)
{
	if (in_file.empty() || s1.empty() || s2.empty())
	{
		std::cerr << "Empty argument !\n";
		return (false);
	}
	return (true);
}

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong Number of arguments !\n";
		return (1);
	}
	if (!pars_args(av[1], av[2], av[3]))
		return (1);
	if (!replace_file(av[1], av[2], av[3]))
		return (1);
	return (0);
}