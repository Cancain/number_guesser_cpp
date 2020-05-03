#include <iostream>
#include <string>

#include "number_generator.h"
#include "input_handler.h"

using std::string;
using std::cout;
using std::endl;


int main(){
  string name{get_name()};


  Guess_parameters guess_parameters {get_guess_parameters()};

  int random_number {get_random_number(3, 5)};
  
  return 0;
}

