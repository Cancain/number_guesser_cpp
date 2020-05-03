#include <cstdlib>
#include <ctime>
#include <iostream>

#include "types.h"

int get_random_number(Guess_parameters guess_parameters){
  std::srand(std::time(nullptr));
  int random_number {std::rand()};

  return guess_parameters.min + 
    (random_number % (guess_parameters.max - guess_parameters.min + 1));
}
