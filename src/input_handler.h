#include <string>

using std::string;

struct Guess_parameters {
  int max;
  int min;
};

Guess_parameters get_guess_parameters();
string get_name();
