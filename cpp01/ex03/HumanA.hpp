/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:41:49 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/13 02:21:55 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
	Weapon wpn;
	std::string name;
	public:
	void setWeapon(Weapon &new_wpn);
	getWeapon();
	setName();
	getName();
	HumanA(std::string new_name, Weapon new_wpn);
	void attack(void);
};
