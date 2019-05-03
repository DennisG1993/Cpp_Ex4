#include "calculate.hpp"
using namespace std;

string calculateBullAndPgia(string number, string guess) {
   int bull = 0, pgia = 0;
   int length = number.length();

   for(int i=0; i<length; i++) {
       if(number.at(i) == guess.at(i))       {
           bull++;
       }
       else {
           //still need to think about it
       }
   }

   return to_string(bull) + "," + to_string(pgia);
}
