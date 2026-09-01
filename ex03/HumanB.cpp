/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:22:50 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/01 15:49:20 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string pName) : _name(pName) 
{
    _weapon = NULL;
}

HumanB::~HumanB() { }

void HumanB::attack()
{
    if (_weapon)
        std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &pWeapon)
{
    _weapon = &pWeapon;
}