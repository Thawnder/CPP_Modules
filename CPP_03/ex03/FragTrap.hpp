#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & base);
		~FragTrap();

		FragTrap & operator=(FragTrap const & base);

		void highFivesGuys();
};

#endif