#include <iostream>
#include <string>

#include "number_generator.h"
#include "input_handler.h"

using std::string;
using std::cout;
using std::endl;

int main(){
  string name{get_name()};

  int random_number {get_random_number(4, 5)};
  
  cout << name << endl;
  return 0;
}

