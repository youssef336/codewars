// Complete the solution so that it reverses the string passed into it.

//     'world' = > 'dlrow' 'word' = > 'drow'

// My solution

#include <string>
using namespace std;

string reverseString(string str)
{
  string reverse = "";

  for (int i = str.length() - 1; i >= 0; i--)
  {
    reverse += str[i];
  }
  return reverse;
}