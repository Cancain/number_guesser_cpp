#include <cstdlib>
#include <ctime>
#include <iostream>

int get_random_number(int min, int max){
  std::srand(std::time(nullptr));
  int random_number {std::rand()};

  return min + (random_number % (max - min + 1));
}
