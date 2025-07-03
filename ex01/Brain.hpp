#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& old);
		Brain& operator = (const Brain& old);
		~Brain(void);

	private:
		std::string ideas[100];
};

#endif