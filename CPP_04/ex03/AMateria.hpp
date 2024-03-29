#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include <ctype.h>
# include <string.h>
# include <iomanip>
# include "ICharacter.hpp"

# define DEBUG 0

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & base);
		virtual ~AMateria();

		AMateria & operator=(AMateria const & base);
		
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif