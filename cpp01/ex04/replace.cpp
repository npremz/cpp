/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:06:26 by npremont          #+#    #+#             */
/*   Updated: 2024/08/30 15:25:30 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int    replace(char *file_name, std::string s1, std::string s2)
{
    std::ifstream input_file(file_name);

    if (input_file.is_open()) 
    {
        std::string line;
        std::string output_file_name(file_name);
        output_file_name = output_file_name += ".replace";
        std::ofstream output_file(output_file_name.c_str());
        
        while (getline(input_file, line))
        {
			size_t pos = 0;
            if (output_file.is_open())
            {
                while ((pos = line.find(s1, pos)) != std::string::npos)
                {
                    line.erase(pos, s1.length());
                    line.insert(pos, s2);
					pos = pos + s2.length();
                }
                output_file << line << std::endl;
            }
            else
            {
                std::cerr << "Can't open output file, file not found or acces denied" << std::endl;
                input_file.close();
                return (EXIT_FAILURE);
            }
        }
        output_file.close();
    }
    else
    {
        std::cerr << "Can't open file, input file not found or acces denied." << std::endl;
        return (EXIT_FAILURE);
    }
    input_file.close();
    return (EXIT_SUCCESS);
}
