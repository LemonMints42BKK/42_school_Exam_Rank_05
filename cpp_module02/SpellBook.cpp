#include "SpellBook.hpp"

SpellBook::SpellBook(SpellBook const& obj){
	*this = obj;
}

SpellBook & SpellBook::operator=(SpellBook const& rhs){
	_SpellBook = rhs._SpellBook;
	return(*this); 
}

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){
	// std::map <std::string, ASpell*>::iterator it = _SpellBook.begin();
	// while(it != _SpellBook.end())
	// {
	// 	++it;
	// 	delete it->second;
	// }
	_SpellBook.clear();
}

void SpellBook::learnSpell(ASpell* spell){
	if(spell){
		_SpellBook[spell->getName()] = spell->clone();
	}
}

void SpellBook::forgetSpell(std::string const& spellName){
	std::map <std::string, ASpell*>::iterator it = _SpellBook.find(spellName);
	if( it != _SpellBook.end()){
		delete it->second;
		_SpellBook.erase(it);
	}

}
ASpell* SpellBook::createSpell(std::string const& spellName){
	ASpell* tmp = NULL;
	if(_SpellBook.find(spellName) != _SpellBook.end())
		tmp = _SpellBook[spellName];
	return (tmp); 
}