// Note : This kata is inspired by Convert a Number to a String !.Try that one too.

//        Description
//            We need a function that can transform a string into a number.What ways of achieving this do you know
//     ?

//     Note
//     : Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

// My solution

#include <string>

int string_to_number(const std::string &s)
{
  int result = stoi(s);
  return result;
}
