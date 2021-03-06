#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scav_trap);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &scav_trap);

	void attack(std::string const &target);
	void guardGate();
};

#endif