// It 's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. You' re given one parameter, the original string.You don't have to worry with strings with less than two characters.

// My solution

#include <string>

using namespace std;

string sliceString(string str)
{
  string result = "";
  for (int i = 1; i < str.length() - 1; i++)
  {
    result += str[i];
  }
  return result;
}