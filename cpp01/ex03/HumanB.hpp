/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:48:52 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/10 17:36:26 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
	Weapon *wpn;
	std::string name;
	public:
    HumanB();
    HumanB(std::string new_name);
	void setWeapon(Weapon &new_wpn);
	void attack(void);
};

#endif
