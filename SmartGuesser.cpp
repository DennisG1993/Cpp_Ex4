#include "SmartGuesser.hpp"
using namespace std;

string SmartGuesser::guess() {
	string ans;
	return ans;
}
void SmartGuesser::learn(string last_guess) {
	int k = 0;
}
void SmartGuesser::startNewGame(unsigned int length) {
	if(length <= 0 ) throw std::invalid_argument("Length is < 1");
}
