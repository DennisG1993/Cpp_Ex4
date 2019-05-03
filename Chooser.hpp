#pragma once
#include <iostream>

namespace bullpgia {
   class Chooser {
      public:
          virtual std::string choose(uint) = 0;
   };
}
