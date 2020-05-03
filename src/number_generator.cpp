#include <cstdlib>
#include <ctime>
#include <iostream>

void get_random_number(int min, int max){
  std::srand(std::time(nullptr));
  int random_number {std::rand()};
  std::cout << random_number << std::endl;
}
