#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

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

string get_name(){
  string name {};

  cout << "Please enter your name: ";
  cin >> name;

  while(incorrect_name(name)){
    cout << "Please enter your name again: ";
    cin >> name;
  }

  return name;
}

