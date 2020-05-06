#include <iostream>
#include <string>
#include <limits>

#include "types.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

//get_name prototypes
bool incorrect_name(string name);
void greeting(string name);

string get_name(){
  string name {};

  cout << "Please enter your name: ";
  cin >> name;

  while(incorrect_name(name)){
    cout << "Please enter your name again: ";
    cin >> name;
  }

  greeting(name);
  return name;
}

bool incorrect_name(string name){
  if(name.size() < 3){
    cout << "Please enter a name with more then three characters" << endl;
    return true;
  }

  if(name.size() > 12){
    cout << "Please enter a name with less then 12 characters" << endl;
    return true;
  }

  return false;
}

void greeting(string name){
  cout << "Hello " << name << endl;
}

//get_guess_parameters prototypes
bool incorrect_min_parameter(int min);
bool incorrect_max_parameter(int max, int min);
bool invalid_input();
void get_min(int &min);
void get_max(int &max, int min);

const int minimum_value {1};
const int maximum_value {1000};

Guess_parameters get_guess_parameters() {
  Guess_parameters guess_parameters{};

  get_min(guess_parameters.min);
  get_max(guess_parameters.max, guess_parameters.min);

  return guess_parameters;
}

void minimum_promt(){
  cout << "Please enter a number between " << minimum_value << " - " << maximum_value - 1 << ": ";
}

void maximum_prompt(int min_value) {
  cout << "Please enter a number between " << min_value + 1 << " - " << maximum_value << ": ";
}

void get_min(int &min){
  while(incorrect_min_parameter(min)){
    cin >> min;
  }
}

void get_max(int &max, int min){
  maximum_prompt(min);
  cin >> max;

  while(incorrect_max_parameter(max, min)){
    cin >> max;
  }
}

bool invalid_input(){
  if(cin.fail()) {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return true;
  }

  return false;
}


bool incorrect_min_parameter(int min){

  if(invalid_input()){
    cout << "You must enter a number... try again" << endl;
    minimum_promt();
    return true;
  }

  if(min < minimum_value || min > maximum_value - 1){
    minimum_promt();
    return true;
  }

  return false;
}

bool incorrect_max_parameter(int max, int min){

  if(invalid_input()){
    cout << "You must enter a number... try again" << endl;
    maximum_prompt(min);
    return true;
  }

  if(max > maximum_value){
    maximum_prompt(min);
    return true;
  }

  if(max <= min){
    cout << "The maximum number must be greater then the minimum number, try again " << endl;
    cout << "Please enter a number between " << min + 1 << " - " << maximum_value << ": ";
    return true;
  }

  return false;
}

//get_guess prototypes
string stringiefied_int(int number);

int get_guess (int num_of_guesses){
  int guess {};
  cout << "This is your " << stringiefied_int(num_of_guesses) << " guess" << endl;

  return 0;
}

string stringiefied_int(int number){
  string stringiefied_int = std::to_string(number);
  switch (number) {
    case 1:
      return stringiefied_int + "st";
    case 2: 
      return stringiefied_int + "nd";
    case 3: 
      return stringiefied_int + "rd";
    default:
      return stringiefied_int + "th";
  }
}


