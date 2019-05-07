#pragma once

#include <iostream>
#include "calculate.hpp"

namespace bullpgia {
   class Guesser {
   protected:
       unsigned int length;
       std::string last_try;


   public:
       virtual std::string guess() = 0;
       
       virtual void startNewGame(unsigned int length) {
          this->length = length;
       }

       virtual void learn(std::string last_guess) {
          this->last_try = last_guess;
       }
   };
}
