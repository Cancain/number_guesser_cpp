#include <iostream>
#include "number_generator.h"

int main(){
  int random_number {get_random_number(4, 5)};
  
  std::cout << random_number << std::endl;
  return 0;
}
