#pragma once

#include <iostream>
#include <string>
// #include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	private:
		std::string _name;
		std::string _title;
		// std::map<std::string, ASpell* > _spellBook;
		SpellBook	_spellBook;
	public:
		Warlock(std::string const& name, std::string const& title);
		~Warlock();

		std::string const & getName() const;
		std::string const & getTitle() const;
		void setTitle(std::string const& str);

		void introduce() const;

		void learnSpell(ASpell * spell);
		void launchSpell(std::string spellName, ATarget const & target);
		void forgetSpell(std::string spellName);

};
