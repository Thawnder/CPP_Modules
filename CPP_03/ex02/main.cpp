#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap one = ClapTrap("Billy");
	ClapTrap two = ClapTrap("Jackson");
	ScavTrap three = ScavTrap("Macy");
	FragTrap four = FragTrap("Jay");

	one.attack("Jackson");
	two.takeDamage(0);
	two.beRepaired(10);
	three.attack("Billy");
	one.takeDamage(20);
	one.attack("Macy");
	three.beRepaired(1);
	three.guardGate();
	four.attack("Macy");
	three.takeDamage(four.getAtk());
	four.attack("Macy");
	three.takeDamage(four.getAtk());
	four.attack("Macy");
	three.takeDamage(four.getAtk());
	four.attack("Macy");
	three.takeDamage(four.getAtk());
	four.highFivesGuys();

	return 0;
}