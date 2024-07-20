#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class Dummy: public ATarget {
	private:
	public:
		Dummy();
		~Dummy();
		ATarget *clone() const;
};