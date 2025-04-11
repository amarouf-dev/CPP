/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:41:49 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/10 15:55:00 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
	Weapon &wpn;
	std::string name;
	public:
	HumanA(std::string new_name, Weapon &new_wpn);
	void attack(void);
};

#endif
