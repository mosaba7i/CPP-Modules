/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 19:39:44 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/15 19:39:46 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int argc, char* argv[])
{
    for(int i = 1; i < argc; i++)
    {
        for(int j = 0; argv[i][j] != '\0'; j++)
        {
            std::cout << (char)std::toupper(argv[i][j]);
        }
        if(i < argc - 1)
            std::cout << " ";
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}
