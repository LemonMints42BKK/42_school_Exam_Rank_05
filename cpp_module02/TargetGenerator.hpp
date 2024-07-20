#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator {
	private:
		std::map <std::string, ATarget*> _targetList;
		TargetGenerator(TargetGenerator const& obj);
		TargetGenerator & operator=(TargetGenerator const& rhs);
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & targetType);
		ATarget* createTarget(std::string const & targetType);

};