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

Guess_parameters get_guess_parameters() {
  Guess_parameters guess_parameters{};

  get_min(guess_parameters.min);
  get_max(guess_parameters.max, guess_parameters.min);

  return guess_parameters;
}

void get_min(int &min){
  while(incorrect_min_parameter(min)){
    cout << "Please input the minimum guess: ";
    cin >> min;
  }
}

void get_max(int &max, int min){
  cout << "Please input the maximum guess: ";
  cin >> max;

  while(incorrect_max_parameter(max, min)){
    cout << "Please input the maximum guess again: ";
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
    return true;
  }

  if(min < 1 || min > 1000){
    cout << "Please enter a number b between 1-1000" << endl;
    return true;
  }

  return false;
}

bool incorrect_max_parameter(int max, int min){
  if(invalid_input()){
    cout << "You must enter a number... try again" << endl;
    return true;
  }

  if(max < 1 || max > 1000){
    cout << "Please enter a number b between 1-1000" << endl;
    return true;
  }

  if(max <= min){
    cout << "The maximum number must be one or greater then the minimum number" << endl;
    return true;
  }

  return false;
}

