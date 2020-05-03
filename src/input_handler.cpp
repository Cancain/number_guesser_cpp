#include <iostream>
#include <string>

#include "input_handler.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

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

Guess_parameters get_guess_parameters() {
  Guess_parameters guess_parameters{};

  cout << "Please input the minimum guess and maximum guess seperated by a space: ";
  cin >> guess_parameters.min;
  cin >> guess_parameters.max;

  cout << "min: " << guess_parameters.min << " max: " << guess_parameters.max << endl;

  return guess_parameters;
}


