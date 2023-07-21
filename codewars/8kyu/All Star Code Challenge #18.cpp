// Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.

//                                                                     If no occurrences can be found,
//     a count of 0 should be returned.

//         ("Hello", "o") == > 1("Hello", "l") ==
//         > 2("", "z") == > 0 str_count("Hello", 'o'); // returns 1
// str_count("Hello", 'l');                             // returns 2
// str_count("", 'z');                                  // returns 0

// My solution

#include <string>

unsigned int strCount(const std::string &word, char letter)
{
  int count = 0;
  for (int i = 0; i < word.length(); i++)
  {
    if (letter == word[i])
    {
      count++;
    }
  }
  return count;
}