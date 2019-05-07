#include "SmartGuesser.hpp"
using namespace std;

string SmartGuesser::guess() {
	string first="";
	if (Stages.size()==pow(10,length)) {
		for (uint i=0; i < this->length; ++i) {
			char c = '0' + i+1;
			first += c;
		}
		smart_guess = first;
		return first;
	}
	//random choice from all_option after filtering
	list<string>::iterator iter=Stages.begin();
	if (Stages.size()>1){
		advance(iter,rand()%(Stages.size()-1));}
	smart_guess = *iter;
	return smart_guess;
 }


 void SmartGuesser::startNewGame(unsigned int length) {
 	Stages.clear();
 	this->length = length;//bullpgia::Guesser::startNewGame(length);
 	unsigned int max = pow(10,length);

 	for ( unsigned int i=0;i<max;i++){
 		stringstream ss;
 		ss << setw(length) << setfill('0') << i;
 		string s = ss.str();
 		Stages.push_front(s);
 	}
 }


void SmartGuesser::learn(string last_guess) {
	list<string>::iterator iter=Stages.begin();
	while (iter != Stages.end()) {
        	string curr_result =calculateBullAndPgia(*iter, smart_guess);
	  	if (last_guess.compare(curr_result)!=0){
			iter=Stages.erase(iter);
		}
		else iter++;
	}
 }
