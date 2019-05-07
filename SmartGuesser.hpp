#pragma once

#include "Guesser.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <list>
#include <math.h>

class SmartGuesser: public bullpgia::Guesser {

	std::list<std::string> Stages;
	std::string smart_guess;

	virtual std::string guess() override;
	virtual void learn(std::string last_guess) override;
	virtual void startNewGame(unsigned int length) override;
};
