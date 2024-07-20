#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fwoosh: public ASpell {
	private:
	public:
		Fwoosh();
		~Fwoosh();
		ASpell *clone() const;
};