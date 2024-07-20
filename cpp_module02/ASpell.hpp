#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	protected:
		std::string _name;
		std::string _effects;
	public:
		ASpell(std::string const& name, std::string const& effects);
		ASpell(ASpell const & obj);
		virtual ~ASpell() {}

		ASpell const& operator=(ASpell const & rhs);

		std::string const & getName() const;
		std::string const & getEffects() const;

		virtual ASpell* clone() const = 0;
		void launch(ATarget const & target) const;
};