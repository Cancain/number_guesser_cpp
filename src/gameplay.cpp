#include <iostream>

#include "input_handler.h"

using std::cout;
using std::endl;

void debug_data(Guess_parameters guess_parameters, int random_number){
  std::cout 
    << "Parameters: " 
    << guess_parameters.min 
    << " - " 
    << guess_parameters.max
    << " random number: " 
    << random_number 
    << std::endl;
}

//game_loop prototypes
void check_guess(bool &game_on, int guess, int random_number);

void game_loop(Guess_parameters guess_parameters, int random_number){
  debug_data(guess_parameters, random_number);

  bool game_on = true;
  int num_of_guesses {1};

  while(game_on){
    int guess {get_guess(num_of_guesses)};
    check_guess(game_on, guess, random_number);
    num_of_guesses += 1;
  }
}

void check_guess(bool &game_on, int guess, int random_number){
  if(guess == random_number){
    cout << "Correct!" << endl;
    game_on = false;

  } else if(guess < random_number){
    cout << "The number is higher then that!, try again..." << endl;

  } else {
    cout << "The number is lower then that!, try again..." << endl;
  }
}
