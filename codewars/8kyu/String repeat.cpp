// Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.

//                                                                              Examples(input->output) 6,
//     "I"->"IIIIII" 5, "Hello"->"HelloHelloHelloHelloHello"

// My solution

#include <string>

std::string repeat_str(size_t repeat, const std::string &str)
{
  std::string result = "";
  for (int i = 1; i <= repeat; i++)
  {
    result += str;
  }
  return result;
}