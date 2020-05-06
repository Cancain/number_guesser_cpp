#include <iostream>

#include "input_handler.h"

void debug_data(Guess_parameters guess_parameters, int random_number){
  std::cout << "Parameters: " << guess_parameters.min << " - " << guess_parameters.max
    << " random number: " << random_number << std::endl;
}

void game_loop(Guess_parameters guess_parameters, int random_number){
  debug_data(guess_parameters, random_number);

  bool game_on = true;
  bool num_of_guesses {1};

  while(game_on){
    get_guess(num_of_guesses);
    game_on = false;
  }
}
