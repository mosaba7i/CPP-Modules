/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 00:26:26 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/27 00:26:29 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

static std::string replaceAll(const std::string &content,
    const std::string &search, const std::string &replacement)
{
    std::string result;
    std::string::size_type current;
    std::string::size_type found;

    current = 0;
    found = content.find(search, current);
    while (found != std::string::npos)
    {
        result.append(content, current, found - current);
        result += replacement;
        current = found + search.length();
        found = content.find(search, current);
    }
    result.append(content, current, content.length() - current);
    return result;
}

int main(int argc, char **argv)
{
    std::ifstream input;
    std::ofstream output;
    std::ostringstream buffer;
    std::string filename;
    std::string search;
    std::string replacement;

    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    filename = argv[1];
    search = argv[2];
    replacement = argv[3];
    if (search.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }
    input.open(filename.c_str());
    if (!input)
    {
        std::cerr << "Error: could not open input file." << std::endl;
        return 1;
    }
    buffer << input.rdbuf();
    if (input.bad())
    {
        std::cerr << "Error: failed while reading input file." << std::endl;
        return 1;
    }
    input.close();
    output.open((filename + ".replace").c_str());
    if (!output)
    {
        std::cerr << "Error: could not create output file." << std::endl;
        return 1;
    }
    output << replaceAll(buffer.str(), search, replacement);
    if (!output)
    {
        std::cerr << "Error: failed while writing output file." << std::endl;
        return 1;
    }
    output.close();
    return 0;
}
