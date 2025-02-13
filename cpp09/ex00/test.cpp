/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:04:18 by simon             #+#    #+#             */
/*   Updated: 2025/02/13 14:58:44 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
/*
int	main(void)
{
	int	month_30[4] = {4, 6, 9, 11};
	int	n = sizeof(month_30) / sizeof(month_30[0]);

	int	*it	= std::find(month_30, month_30 + n, 11);
	int	index = (it == month_30 + n) ? -1 : (it - month_30);
	std::cout << index << std::endl;
	std::cout << n << std::endl;
	return (0);
}*/

#include <iostream>
#include <map>

int main() {
    std::map<int, int> myMap;
    myMap[1] = 0;  // Initialisation obligatoire

    for (int i = 0; i < 5; i++) {
        myMap.begin()->second = i; // Modifier la valeur du premier élément
        std::cout << "Premier élément : (" << myMap.begin()->first 
                  << ", " << myMap.begin()->second << ")" << std::endl;
    }

    return 0;
}
