#pragma once

#include "Guesser.hpp"
#include <iostream>

class SmartGuesser: public bullpgia::Guesser {


	virtual std::string guess() override;
	virtual void learn(std::string last_guess) override;
	virtual void startNewGame(unsigned int length) override;
};
