#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title){
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
   std::cout << this->getName() <<": My job here is done!" << std::endl;
}

std::string const Warlock::getName() const{
	return(_name);
}

std::string const Warlock::getTitle() const{
	return(_title);
}

void	Warlock::setTitle(std::string const & str){
	_title = str;
}

void	Warlock::introduce() const{
	std::cout << this->getName() << ": I am " << this->getName() << ", "<< this->getTitle() << "!" << std::endl;
}