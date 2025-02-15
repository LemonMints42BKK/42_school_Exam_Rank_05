#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	protected:
		std::string _type;

	public:
		ATarget(std::string const& type);
		ATarget(ATarget const & obj);
		virtual ~ATarget() {}

		ATarget& operator=(ATarget const & rhs);

		std::string const & getType() const;

		virtual ATarget* clone() const = 0;
		void getHitBySpell(ASpell const& spell) const;
};