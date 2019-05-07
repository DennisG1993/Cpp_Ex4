#include "calculate.hpp"
using namespace std;

string calculateBullAndPgia(string number, string guess) {
   int bull = 0, pgia = 0;
   int length = number.length();
   int gussed_nums[10] = {0};
   for(int i=0; i<length; i++) {
       if(number.at(i) == guess.at(i))       {
           bull++;
       }
       else {
          if(gussed_nums[guess.at(i) - '0'] -- > 0){
             pgia++;}
          if(gussed_nums[guess.at(i) - '0'] ++ < 0){
             pgia++;}
       }
   }

   return to_string(bull) + "," + to_string(pgia);
}
