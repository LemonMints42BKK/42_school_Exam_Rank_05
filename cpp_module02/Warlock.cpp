#include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title): _name(name), _title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const{
	return (_name);
}
		
std::string const & Warlock::getTitle() const{
	return (_title);
}

void Warlock::setTitle(std::string const& str){
	_title = str;
}

void Warlock::introduce() const{
	std::cout << this->getName() << ": I am " << this->getName() << ", "<< this->getTitle() << "!" << std::endl;
}

void Warlock::learnSpell(ASpell * spell){
	_spellBook.learnSpell(spell);
}

void Warlock::launchSpell(std::string spellName, ATarget const & target){
	if(_spellBook.createSpell(spellName)){
		_spellBook.createSpell(spellName)->launch(target);
	}
}

void Warlock::forgetSpell(std::string spellName){
	_spellBook.forgetSpell(spellName);
}