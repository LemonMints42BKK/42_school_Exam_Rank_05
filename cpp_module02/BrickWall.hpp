#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class BrickWall: public ATarget {
	private:
	public:
		BrickWall();
		~BrickWall();
		ATarget *clone() const;
};