#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Polymorph: public ASpell {
	private:
	public:
		Polymorph();
		~Polymorph();
		ASpell *clone() const;
};