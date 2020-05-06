#include <iostream>
#include <string>

#include "number_generator.h"
#include "input_handler.h"
#include "gameplay.h"

using std::string;
using std::cout;
using std::endl;

int main(){
  string name{get_name()};

  Guess_parameters guess_parameters {get_guess_parameters()};

  int random_number {get_random_number(guess_parameters)};

  game_loop(guess_parameters, random_number);
  
  return 0;
}

